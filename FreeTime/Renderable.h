#pragma once
#include "../Content/ShaderStructures.h"
#include <DirectXMath.h>
#include <vector>

using namespace std;

namespace FreeTime
{
	class Renderable
	{
	public:
		Renderable();
		vector<short> indices;
		vector<VertexPositionColor> vertices;
		int startIndex;
	private:

	};
}