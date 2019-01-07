#include <vtkSmartPointer.h>
#include <vtkPolyDataMapper.h>
#include <vtkObjectFactory.h>
#include <vtkPointSource.h>
#include <vtkPolyData.h>
#include <vtkPointLocator.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkActor.h>
#include <vtkRenderWindow.h>
#include <vtkRenderer.h>

class KeyPressInteractorStyle3 : public vtkInteractorStyleTrackballCamera
{
  public:
    static KeyPressInteractorStyle3* New();

    KeyPressInteractorStyle3() : PointsPerBucket(1) {}

    virtual void OnChar()
    {
      vtkRenderWindowInteractor *rwi = this->Interactor;		
      char ch = rwi->GetKeyCode() ;

      switch (ch)
      {
        case 'n':
          cout << "Next." << endl;
          this->PointsPerBucket++;
          break;
        case 'p':
          cout << "Previous." << endl;
          if(this->PointsPerBucket > 1)
          {
            this->PointsPerBucket--;
          }
          break ;
        default:
          std::cout << "An unhandled key was pressed." << std::endl;
          break;
      }

      std::cout << "PointsPerBucket = " << this->PointsPerBucket << std::endl;

      // Create the tree
      pointLocator->SetNumberOfPointsPerBucket(this->PointsPerBucket);
      pointLocator->BuildLocator();
      pointLocator->GenerateRepresentation(1, polydata);

      renderWindow->Render();

      // Forward events
      vtkInteractorStyleTrackballCamera::OnChar();
    }

    vtkPointLocator* pointLocator;
    vtkRenderWindow* renderWindow;
    vtkPolyData* polydata;

  private:
    unsigned int PointsPerBucket;
};

vtkStandardNewMacro(KeyPressInteractorStyle3);

int main(int, char *[])
{
  vtkSmartPointer<vtkPointSource> pointSource =
    vtkSmartPointer<vtkPointSource>::New();
  pointSource->SetNumberOfPoints(4000);
  pointSource->Update();

  // Create the tree
  vtkSmartPointer<vtkPointLocator> pointLocator =
    vtkSmartPointer<vtkPointLocator>::New();
  pointLocator->SetDataSet(pointSource->GetOutput());
  pointLocator->AutomaticOn();
  pointLocator->SetNumberOfPointsPerBucket(2);
  pointLocator->BuildLocator();

  std::cout << "There are " << pointLocator->GetLevel() << " levels." << std::endl;
  std::cout << "There are " << pointLocator->GetNumberOfPointsPerBucket()
            << " points per bucket." << endl;

  vtkSmartPointer<vtkPolyData> polydata = vtkSmartPointer<vtkPolyData>::New();
  pointLocator->GenerateRepresentation(pointLocator->GetLevel(), polydata);

  // Visualize
  vtkSmartPointer<vtkPolyDataMapper> mapper =
    vtkSmartPointer<vtkPolyDataMapper>::New();
  mapper->SetInputData(polydata);

  vtkSmartPointer<vtkActor> actor = vtkSmartPointer<vtkActor>::New();
  actor->SetMapper(mapper);

  vtkSmartPointer<vtkRenderer> renderer =
    vtkSmartPointer<vtkRenderer>::New();
  vtkSmartPointer<vtkRenderWindow> renderWindow =
    vtkSmartPointer<vtkRenderWindow>::New();
  renderWindow->AddRenderer(renderer);

  vtkSmartPointer<vtkRenderWindowInteractor> renderWindowInteractor =
    vtkSmartPointer<vtkRenderWindowInteractor>::New();
  renderWindowInteractor->SetRenderWindow(renderWindow);

  vtkSmartPointer<KeyPressInteractorStyle3> style =
    vtkSmartPointer<KeyPressInteractorStyle3>::New();
  style->pointLocator = pointLocator;
  style->renderWindow = renderWindow;
  style->polydata = polydata;

  renderWindowInteractor->SetInteractorStyle( style );

  renderer->AddActor(actor);
  renderer->SetBackground(1,1,1); // Background color white

  renderWindow->Render();

  renderWindowInteractor->Start();

  return EXIT_SUCCESS;
}
