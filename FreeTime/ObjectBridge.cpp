#include "pch.h"
#include "ObjectBridge.h"
#include "Cube.h"
#include <iostream>

using namespace FreeTime;

ObjectBridge::ObjectBridge()
{
	
	
/*	Plane plane12 = Plane::Plane(indices, vertices, 0.6f);
	Plane plane132 = Plane::Plane(indices, vertices, 0.8f);
	Plane plane  = Plane::Plane(indices, vertices,  0.0f);
	Plane plane2 = Plane::Plane(indices, vertices, -0.2f);
	Plane plane3 = Plane::Plane(indices, vertices, -0.4f);
	Plane plane4 = Plane::Plane(indices, vertices, -0.6f);
	Plane plane5 = Plane::Plane(indices, vertices, -0.8f);
	Plane plane6 = Plane::Plane(indices, vertices, -1.0f);*/
	Cube cube = Cube::Cube(indices, vertices);
	//Cube cube2 = Cube::Cube(indices, vertices, 0.5f);

	cout << "Total Vert: " << vertices.size() << endl;
	cout << "Total Indi: " << indices.size() << endl;
	//Pass data of all objects above into SceneRenderer


	return;
}