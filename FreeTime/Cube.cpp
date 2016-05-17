#include "pch.h"
#include "Cube.h"
#include <DirectXMath.h>
#include <fstream>
#include <string>
#include <iostream>

using namespace FreeTime;
using namespace DirectX;
//using namespace std;

Cube::Cube()
{
	indices.reserve(36);
	vertices.reserve(8);

	ifstream file("cube.txt");
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
	vertices.push_back({ XMFLOAT3(0.5f, -0.5f, -0.5f), XMFLOAT3(1.0f, 0.0f, 0.0f) });
	vertices.push_back({ XMFLOAT3(0.5f, -0.5f,  0.5f), XMFLOAT3(1.0f, 0.0f, 1.0f) });
	vertices.push_back({ XMFLOAT3(0.5f,  0.5f, -0.5f), XMFLOAT3(1.0f, 1.0f, 0.0f) });
	vertices.push_back({ XMFLOAT3(0.5f,  0.5f,  0.5f), XMFLOAT3(1.0f, 1.0f, 1.0f) });
	return;
}