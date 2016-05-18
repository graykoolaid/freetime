#pragma once
#include "../Content/ShaderStructures.h"
#include <DirectXMath.h>
#include <vector>
#include "Renderable.h"

using namespace std;

namespace FreeTime
{
	class Cube : public Renderable
	{
	public:
		Cube();
		vector<short> indices;
		vector<VertexPositionColor> vertices;
	private:
			
	};

	class Plane : public Renderable
	{
	public:
		Plane();
		vector<short> indices;
		vector<VertexPositionColor> vertices;
	private:

	};
}