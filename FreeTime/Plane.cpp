#include "pch.h"
#include "Cube.h"
#include <DirectXMath.h>
#include <fstream>
#include <string>
#include <iostream>

using namespace FreeTime;
using namespace DirectX;
//using namespace std;

Plane::Plane()
{
	plane_helper(this->indices, this->vertices, 0.0f);
	return;
}

Plane::Plane(vector<short>& indices, vector<VertexPositionColor>& vertices)
{
	plane_helper(indices, vertices, 0.0f);
	return;
}

Plane::Plane(vector<short>& indices, vector<VertexPositionColor>& vertices, float y)
{
	plane_helper(indices, vertices, y);
	return;
}

void Plane::plane_helper(vector<short>& indices, vector<VertexPositionColor>& vertices, float y)
{
	int temp_vertex_size = vertices.size();

	ifstream file("plane.txt");
	short temp;
	while (file) {
		file >> temp;
		indices.push_back(temp + temp_vertex_size);
		number_of_indices++;
	}
	indices.pop_back();

	vertices.push_back({ XMFLOAT3(1.0f,  y, -1.0f), XMFLOAT3(0.0f, 0.0f, 0.0f) });
	vertices.push_back({ XMFLOAT3(1.0f,  y,  1.0f), XMFLOAT3(0.0f, 0.0f, 1.0f) });
	vertices.push_back({ XMFLOAT3(-1.0f, y, -1.0f), XMFLOAT3(0.0f, 1.0f, 0.0f) });
	vertices.push_back({ XMFLOAT3(-1.0f, y,  1.0f), XMFLOAT3(1.0f, 0.0f, 0.0f) });
	number_of_vertices = 4;

	index_pos = indices.size() - number_of_indices;
	vertex_pos = vertices.size() - number_of_vertices;

	return;
}