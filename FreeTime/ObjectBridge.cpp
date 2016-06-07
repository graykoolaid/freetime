#include "pch.h"
#include "ObjectBridge.h"
#include "Cube.h"

using namespace FreeTime;

ObjectBridge::ObjectBridge()
{
	
	
//	Plane plane  = Plane::Plane(indices, vertices,  0.0f);
//	Plane plane2 = Plane::Plane(indices, vertices, -0.2f);
//	Plane plane3 = Plane::Plane(indices, vertices, -0.4f);
//	Plane plane4 = Plane::Plane(indices, vertices, -0.6f);
	Plane plane5 = Plane::Plane(indices, vertices, -0.8f);
	Cube cube = Cube::Cube(indices, vertices);
	//Pass data of all objects above into SceneRenderer


	return;
}