#pragma once
#include "../Content/ShaderStructures.h"
#include <DirectXMath.h>
#include <vector>

using namespace std;

namespace FreeTime
{
	class Cube
	{
	public:
		Cube();
		vector<short> indices;
		vector<VertexPositionColor> vertices;
	private:
			
	};
}