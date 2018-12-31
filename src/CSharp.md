# CSharp Examples

!!! info
    [This table](/Coverage/CSharpVTKClassesUsed.md) shows the VTK classes covered by the examples.

!!! info
    [This table](/Coverage/CSharpVTKClassesNotUsed.md) shows VTK classes that do not have an example. Please add examples in your area of expertise!

| Example Name | Classes Demonstrated | Description | Image |
| -------------- | ---------------------- | ------------- | ------- |

## Simple Operations

| Example Name | Classes Demonstrated | Description | Image |
| -------------- | ---------------------- | ------------- | ------- |
[DistanceBetweenPoints](/CSharp/SimpleOperations/DistanceBetweenPoints) | vtkMath | Computes the distance between two point Distance between two points
[DistancePointToLine](/CSharp/SimpleOperations/DistancePointToLine) | vtkLine | Distance between a point and a line
[GaussianRandomNumber](/CSharp/SimpleOperations/GaussianRandomNumber) | vtkMath | Generates Gaussian random number Random number (Gaussian distribution)
[PerspectiveTransform](/CSharp/SimpleOperations/PerspectiveTransform) | vtkPerspectiveTransform | Apply a perspective transformation to a point
[ProjectPointPlane](/CSharp/SimpleOperations/ProjectPointPlane) | vtkPlane | Project a point onto a plan Project a point onto a plane
[RandomSequence](/CSharp/SimpleOperations/RandomSequence) | vtkMinimalStandardRandomSequence | This is the preferred way to generate random numbers Random sequence
[UniformRandomNumber](/CSharp/SimpleOperations/UniformRandomNumber) | vtkMath | Generates uniform random number Random number (uniform distribution)

## Input and Output

### Graph Formats

### 3D File Formats

| Example Name | Classes Demonstrated | Description | Image |
| -------------- | ---------------------- | ------------- | ------- |
[ConvertFile](/CSharp/IO/ConvertFile) |  | Convert a file from one type to another
[XGMLReader](/CSharp/InfoVis/XGMLReader) | vtkXGMLReader | Read a .gml file

#### Standard Formats

##### Input

| Example Name | Classes Demonstrated | Description | Image |
| -------------- | ---------------------- | ------------- | ------- |
[DEMReader](/CSharp/IO/DEMReader) | vtkDEMReader | Read DEM (elevation map) files
[ReadDICOMSeries](/CSharp/IO/ReadDICOMSeries) | vtkDICOMImageReader | This example demonstates how to read a series of DICOM images and scroll through slice Convert a series of DICOM files into a VTI File
[ReadPDB](/CSharp/IO/ReadPDB) | vtkPDBReader | Read Protein Data Bank Files Read Protein Data Bank files (.pdb) files
[ReadPLOT3D](/CSharp/IO/ReadPLOT3D) | vtkPLOT3DReader | Read CFD (computational fluid dynamics) data produced by PLOT3D Read PLOT3D (.bin) files
[ReadPLY](/CSharp/IO/ReadPLY) | vtkPLYReader | Read PLY (.ply) files
[ReadSTL](/CSharp/IO/ReadSTL) | vtkSTLReader | Read stereo lithography STL (.stl) files
[SimplePointsReader](/CSharp/IO/SimplePointsReader) | vtkSimplePointsReader | Read a simple "xyz" file of points
[VRML](/CSharp/IO/VRML) | vtkVRMLImporter | Read a VRML (WRL) file

#### VTK Formats

##### Input

| Example Name | Classes Demonstrated | Description | Image |
| -------------- | ---------------------- | ------------- | ------- |
[ParticleReader](/CSharp/IO/ParticleReader) | vtkParticleReader | Read an ASCII file
[ReadImageData](/CSharp/IO/ReadImageData) | vtkXMLImageDataReader | Read a image data (.vti) file
[ReadOBJ](/CSharp/IO/ReadOBJ) | vtkOBJReader | Read a Wavefront OBJ file
[ReadPlainText](/CSharp/IO/ReadPlainText) |  | Read a plain text file
[ReadPolyData](/CSharp/IO/ReadPolyData) | vtkXMLPolyDataReader | Read a polygonal data (.vtp) file
[ReadRectilinearGrid](/CSharp/IO/ReadRectilinearGrid) | vtkXMLRectilinearGridReader | Read a rectilinear grid (.vtr) file
[ReadStructuredGrid](/CSharp/IO/ReadStructuredGrid) | vtkXMLStructuredGridReader | Read a structured grid (.vts) file
[ReadUnknownTypeXMLFile](/CSharp/IO/ReadUnknownTypeXMLFile) | vtkXMLGenericDataObjectReader | Read an XML file and later decide what kind it is
[ReadUnstructuredGrid](/CSharp/IO/ReadUnstructuredGrid) | vtkXMLUnstructuredGridReader | Demonstrates how to read a .vtu fil Read an unstructured grid (.vtu) file

##### Output

| Example Name | Classes Demonstrated | Description | Image |
| -------------- | ---------------------- | ------------- | ------- |
[WriteVTI](/CSharp/IO/WriteVTI) | vtkXMLImageDataWriter | VTI is an "ImageData" Write a .vti file
[WriteVTP](/CSharp/IO/WriteVTP) | vtkXMLPolyDataWriter | VTP is a "PolyData". This format allows for the most complex geometric objects to be stored Write a .vtp file
[WriteVTU](/CSharp/IO/WriteVTU) | vtkXMLUnstructuredGridWriter | VTU is an "Unstructured Grid". This format allows for 3D data to be stored Write a .vtu file
[XMLStructuredGridWriter](/CSharp/IO/XMLStructuredGridWriter) | vtkXMLStructuredGridWriter | Write a .vts file from a vtkStructuredGrid

### Image Formats

#### Input

| Example Name | Classes Demonstrated | Description | Image |
| -------------- | ---------------------- | ------------- | ------- |
[ImageReader2Factory](/CSharp/IO/ImageReader2Factory) | vtkImageReader2Factory | This class tries to find an appropriate reader. It is very convenient to use this when you don't know what kind of file to expect Read most standard image formats.
[JPEGReader](/CSharp/IO/JPEGReader) | vtkJPEGReader | Read a JPG image
[MetaImageReader](/CSharp/IO/MetaImageReader) | vtkMetaImageReader | Read .mha files
[PNGReader](/CSharp/IO/PNGReader) | vtkPNGReader | Read a PNG image
[ReadBMP](/CSharp/IO/ReadBMP) | vtkBMPReader | Read BMP (.bmp) files
[ReadPNM](/CSharp/IO/ReadPNM) | vtkPNMReader | Read PNM (.pnm) files
[ReadTIFF](/CSharp/IO/ReadTIFF) | vtkTIFFReader | Read TIFF (.tif) files

#### Output

| Example Name | Classes Demonstrated | Description | Image |
| -------------- | ---------------------- | ------------- | ------- |
[JPEGWriter](/CSharp/IO/JPEGWriter) | vtkJPEGWriter | Write a JPEG (.jpg) file
[MetaImageWriter](/CSharp/IO/MetaImageWriter) | vtkMetaImageWriter | Write a .mha/.mhd + .raw file
[WriteBMP](/CSharp/IO/WriteBMP) | vtkBMPWriter | Write a BMP (.bmp) file
[WritePNG](/CSharp/IO/WritePNG) | vtkPNGWriter | Write a PNG (.png) file
[WritePNM](/CSharp/IO/WritePNM) | vtkPNMWriter | Write a PNM (.pnm) file
[WriteTIFF](/CSharp/IO/WriteTIFF) | vtkTIFFWriter | Write a TIFF (.tif) file

## Geometric Objects

| Example Name | Classes Demonstrated | Description | Image |
| -------------- | ---------------------- | ------------- | ------- |
[Arrow](/CSharp/GeometricObjects/Arrow) | vtkArrowSource | Arrow
[Axes](/CSharp/GeometricObjects/Axes) | vtkAxesActor | Axes
[ColoredLines](/CSharp/GeometricObjects/ColoredLines) | vtkCellData vtkLine | Colored Lines
[Cone](/CSharp/GeometricObjects/Cone) | vtkConeSource | Cone
[Cube](/CSharp/GeometricObjects/Cube) | vtkCubeSource | Cube
[Cylinder](/CSharp/GeometricObjects/Cylinder) | vtkCylinderSource | Cylinder
[Disk](/CSharp/GeometricObjects/Disk) | vtkDiskSource | A circle with a hole in it Disk
[Frustum](/CSharp/GeometricObjects/Frustum) | vtkFrustumSource | Frustum
[GeometricObjectsDemo](/CSharp/GeometricObjects/GeometricObjectsDemo) |  | A demonstration of all geometric objects that work the same way
[Hexahedron](/CSharp/GeometricObjects/Hexahedron) | vtkHexahedron | Hexahedron
[Line](/CSharp/GeometricObjects/Line) | vtkLineSource | Line
[LongLine](/CSharp/GeometricObjects/LongLine) | vtkLine | Manually create a polyline
[OrientedArrow](/CSharp/GeometricObjects/OrientedArrow) | vtkArrowSource | Oriented Arrow
[Plane](/CSharp/GeometricObjects/Plane) | vtkPlaneSource | Plane
[Planes](/CSharp/GeometricObjects/Planes) | vtkPlanes | Planes
[PlanesIntersection](/CSharp/GeometricObjects/PlanesIntersection) | vtkPlanesIntersection | PlanesIntersection
[PlatonicSolid](/CSharp/GeometricObjects/PlatonicSolid) | vtkPlatonicSolidSource | PlatonicSolid
[Point](/CSharp/GeometricObjects/Point) | vtkPoints | Point
[PolyLine](/CSharp/GeometricObjects/PolyLine) | vtkPolyLine | PolyLine
[Polygon](/CSharp/GeometricObjects/Polygon) | vtkPolygon | Polygon
[PolygonIntersection](/CSharp/GeometricObjects/PolygonIntersection) | vtkPolygon | IntersectWithLine( Compute the intersection of a line segment with a polygon
[Pyramid](/CSharp/GeometricObjects/Pyramid) | vtkPyramid | Pyramid
[Quad](/CSharp/GeometricObjects/Quad) | vtkQuad | Quad
[RegularPolygonSource](/CSharp/GeometricObjects/RegularPolygonSource) | vtkRegularPolygonSource | Regular Polygon
[Sphere](/CSharp/GeometricObjects/Sphere) | vtkSphereSource | Sphere
[Tetrahedron](/CSharp/GeometricObjects/Tetrahedron) | vtkTetra | Tetrahedron
[Triangle](/CSharp/GeometricObjects/Triangle) | vtkTriangle | Triangle
[TriangleStrip](/CSharp/GeometricObjects/TriangleStrip) | vtkTriangleStrip | Triangle strip
[Vertex](/CSharp/GeometricObjects/Vertex) | vtkVertex | Vertex

### Parametric Objects

These examples demonstrate how to create an display one of the many vtkParametric* objects. All of the classes listed can be used in an identical fashion.

| Example Name | Classes Demonstrated | Description | Image |
| -------------- | ---------------------- | ------------- | ------- |
[ParametricObjects](/CSharp/GeometricObjects/ParametricObjects) | vtkParametricBoy, vtkParametricConicSpiral, vtkParametricCrossCap, vtkParametricDini, vtkParametricEllipsoid, vtkParametricEnneper, vtkParametricFigure8Klein, vtkParametricKlein, vtkParametricMobius, vtkParametricRandomHills, vtkParametricRoman, vtkParametricSpline, vtkParametricSuperEllipsoid, vtkParametricSuperToroid, vtkParametricTorus | Create and display a parametric object
[ParametricObjectsDemo](/CSharp/GeometricObjects/ParametricObjectsDemo) |  | Demonstration of all of the vtkParametric* classes

## Implicit Functions and Iso-surfaces

| Example Name | Classes Demonstrated | Description | Image |
| -------------- | ---------------------- | ------------- | ------- |
[BandedPolyDataContourFilter](/CSharp/VisualizationAlgorithms/BandedPolyDataContourFilter) | vtkBandedPolyDataContourFilter | BandedPolyDataContourFilter
[ExtractLargestIsosurface](/CSharp/Modelling/ExtractLargestIsosurface) | vtkPolyDataConnectivityFilter | Extract largest isosurface
[FilledContours](/CSharp/VisualizationAlgorithms/FilledContours) | vtkContourFilter | Create filled contours (vtkClipPolyData)
[ImplicitSphere](/CSharp/ImplicitFunctions/ImplicitSphere) | vtkSphere | An implicit representation of a sphere
[IsoContours](/CSharp/ImplicitFunctions/IsoContours) | vtkContourFunction | Visualize different isocontours using a slider
[MarchingCubes](/CSharp/Modelling/MarchingCubes) | vtkMarchingCubes | Create a voxelized spher Marching cubes
[MarchingSquares](/CSharp/WishList/Modelling/MarchingSquares) | vtkMarchingSquares | Create a contour from a structured point set (image Marching squares
[SampleFunction](/CSharp/ImplicitFunctions/SampleFunction) | vtkSampleFunction | Sample and visualize an implicit function

## Working with 3D Data

| Example Name | Classes Demonstrated | Description | Image |
| -------------- | ---------------------- | ------------- | ------- |
[AlignFrames](/CSharp/PolyData/AlignFrames) | vtkLandmarkTransform | Align coordinate frames
[ContoursFromPolyData](/CSharp/Filtering/ContoursFromPolyData) | vtkCutter | Create contours from PolyData
[FindAllArrayNames](/CSharp/IO/FindAllArrayNames) | vtkPolyData | Get the names of all of the data arrays
[ImplicitBoolean](/CSharp/Filters/ImplicitBoolean) | vtkImplicitBoolean | Operations include intersection and union.
[IterateOverLines](/CSharp/PolyData/IterateOverLines) | vtkCellArray | Iterate through the lines of a PolyData
[MultiBlockMergeFilter](/CSharp/PolyData/MultiBlockMergeFilter) | vtkMultiBlockMergeFilter, vtkMultiBlockDataSet | Combine MultiBlockDataSets
[NullPoint](/CSharp/PolyData/NullPoint) | vtkPointData | Set everything in PointData at a specified index to NUL NullPoint
[PolyDataGetPoint](/CSharp/PolyData/PolyDataGetPoint) | vtkPolyData | Get point locations/coordinates from a vtkPolyData
[ShrinkPolyData](/CSharp/PolyData/ShrinkPolyData) | vtkShrinkPolyData | Move all items in a PolyData towards their centroid
[VectorFieldNonZeroExtraction](/CSharp/PolyData/VectorFieldNonZeroExtraction) | vtkExtractSelectedThresholds | This example shows how to create an imagedata object, associate scalar data with some points and visualize only nonzero scalar value Extract non-zero vectors from a vtkImageData
[WarpVector](/CSharp/PolyData/WarpVector) | vtkWarpVector | vtkWarpVector

### Working with Meshes

| Example Name | Classes Demonstrated | Description | Image |
| -------------- | ---------------------- | ------------- | ------- |
[BoundaryEdges](/CSharp/Meshes/BoundaryEdges) | vtkFeatureEdges | Find the edges that are used by only one face Finding Boundary Edges
[CapClip](/CSharp/Meshes/CapClip) | vtkClipPolyData | Cap a clipped polydata with a polygon
[CellEdges](/CSharp/Meshes/CellEdges) | vtkCell | Get edges of cells
[ClosedSurface](/CSharp/PolyData/ClosedSurface) | vtkFeatureEdges | Check if a surface is closed
[ColorDisconnectedRegions](/CSharp/PolyData/ColorDisconnectedRegions) | vtkPolyDataConnectivityFilter | Color each disconnected region of a vtkPolyData a different color
[ColoredElevationMap](/CSharp/Meshes/ColoredElevationMap) | vtkLookupTable | Colormap, color ma Color a mesh by height
[Curvature](/CSharp/PolyData/Curvature) | vtkCurvatures | Compute Gaussian, Mean, Min, and Max Curvatures
[Decimate](/CSharp/Meshes/Decimate) | vtkDecimatePro | Reduce the number of triangles in a mesh Decimation
[DijkstraGraphGeodesicPath](/CSharp/PolyData/DijkstraGraphGeodesicPath) | vtkDijkstraGraphGeodesicPath | Find the shortest path between two points on a mesh
[ElevationFilter](/CSharp/Meshes/ElevationFilter) | vtkElevationFilter | Color a mesh by height
[ExtractEdges](/CSharp/Meshes/ExtractEdges) | vtkExtractEdges | Extract Edges
[FillHoles](/CSharp/Meshes/FillHoles) | vtkFillHolesFilter | Close holes in a mesh Fill Holes
[GreedyTerrainDecimation](/CSharp/PolyData/GreedyTerrainDecimation) | vtkGreedyTerrainDecimation | Create a mesh from an ImageData
[HighlightBadCells](/CSharp/PolyData/HighlightBadCells) | vtkMeshQuality | Highlight Bad Cells
[LargestRegion](/CSharp/PolyData/PolyDataConnectivityFilter_LargestRegion) | vtkPolyDataConnectivityFilter | Extract the largest connected region in a polydata
[MatrixMathFilter](/CSharp/Meshes/MatrixMathFilter) | vtkMatrixMathFilter | Compute various quantities on cell and points in a mesh Matrix math filter
[OBBDicer](/CSharp/Meshes/OBBDicer) | vtkOBBDicer | Breakup a mesh into pieces OBBDicer
[PolygonalSurfaceContourLineInterpolator](/CSharp/PolyData/PolygonalSurfaceContourLineInterpolator) | vtkPolygonalSurfaceContourLineInterpolator | Interactively find the shortest path between two points on a mesh
[QuadricClustering](/CSharp/Meshes/QuadricClustering) | vtkQuadricClustering | Reduce the number of triangles in a mesh Decimation (quadric clustering)
[QuadricDecimation](/CSharp/Meshes/QuadricDecimation) | vtkQuadricDecimation | Reduce the number of triangles in a mesh Decimation (quadric decimation)
[SelectPolyData](/CSharp/PolyData/SelectPolyData) | vtkSelectPolyData | Select a region of a mesh
[SimpleElevationFilter](/CSharp/Meshes/SimpleElevationFilter) | vtkSimpleElevationFilter | Color a mesh by dotting a vector from the origin to each point with a specified vector
[SolidClip](/CSharp/Meshes/SolidClip) | vtkClipPolyData | Create a "solid" clip
[SpecifiedRegion](/CSharp/PolyData/PolyDataConnectivityFilter_SpecifiedRegion) | vtkPolyDataConnectivityFilter | Extract a specific (specified) connected region in a polydata
[Subdivision](/CSharp/Meshes/Subdivision) | vtkButterflySubdivisionFilter, vtkLoopSubdivisionFilter, vtkLinearSubdivisionFilter | Increase the number of triangles in a mesh Subdivision
[Triangulate](/CSharp/Meshes/Triangulate) | vtkTriangleFilter | Convert all polygons in a mesh to triangles Triangulate a mesh
[WeightedTransformFilter](/CSharp/PolyData/WeightedTransformFilter) | vtkWeightedTransformFilter | vtkWeightedTransformFilter
[WindowedSincPolyDataFilter](/CSharp/Meshes/WindowedSincPolyDataFilter) | vtkWindowedSincPolyDataFilter | Smooth a mesh.

### Working with Structured 3D Data

This section includes vtkImageData, vtkStructuredGrid, and vtkRectilinearGrid.

"ImageData" is not the traditional "flat, 2D image" you are used to. It is a special VTK data structure in the collection of 3D data structures provided by VTK. Here is an overview of these data structures: [http://vtk.org/Wiki/VTK/Tutorials/3DDataTypes]. Image data can represent at typical 2D image, but also, a 3D volume.
