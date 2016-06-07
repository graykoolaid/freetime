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
	indices.reserve(36);
	vertices.reserve(8);

	ifstream file("plane.txt");
	short temp;
	int val = 0;
	while (file) {
		file >> temp;
		indices.push_back(temp);
	}

	vertices.push_back({ XMFLOAT3(-0.5f, -0.5f, -0.5f), XMFLOAT3(0.0f, 0.0f, 0.0f) });
	vertices.push_back({ XMFLOAT3(-0.5f, -0.5f,  0.5f), XMFLOAT3(0.0f, 0.0f, 1.0f) });
	vertices.push_back({ XMFLOAT3(-0.5f,  0.5f, -0.5f), XMFLOAT3(0.0f, 1.0f, 0.0f) });
	vertices.push_back({ XMFLOAT3(-0.5f,  0.5f,  0.5f), XMFLOAT3(0.0f, 1.0f, 1.0f) });

	return;
}

Plane::Plane(vector<short>& indices, vector<VertexPositionColor>& vertices)
{
	int temp_vertex_size = vertices.size();
	cout << indices.size() << endl;

	ifstream file("plane.txt");
	short temp;
	int val = 0;
	while (file) {
		file >> temp;
		indices.push_back(temp+temp_vertex_size);
		number_of_indices++;
	}
	indices.pop_back();

	vertices.push_back({ XMFLOAT3( 1.0f,  0.0f, -1.0f), XMFLOAT3(0.0f, 0.0f, 0.0f) });
	vertices.push_back({ XMFLOAT3( 1.0f,  0.0f,  1.0f), XMFLOAT3(0.0f, 0.0f, 1.0f) });
	vertices.push_back({ XMFLOAT3(-1.0f,  0.0f, -1.0f), XMFLOAT3(0.0f, 1.0f, 0.0f) });
	vertices.push_back({ XMFLOAT3(-1.0f,  0.0f,  1.0f), XMFLOAT3(1.0f, 0.0f, 0.0f) });
	number_of_vertices = 4;

	index_pos = indices.size() - number_of_indices;
	vertex_pos = vertices.size() - number_of_vertices;

	return;
}

Plane::Plane(vector<short>& indices, vector<VertexPositionColor>& vertices, float y)
{
	int temp_vertex_size = vertices.size();
	cout << indices.size() << endl;

	ifstream file("plane.txt");
	short temp;
	int val = 0;
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