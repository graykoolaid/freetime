#pragma once
#include "../Content/ShaderStructures.h"
#include <DirectXMath.h>
#include <vector>
#include "Renderable.h"

using namespace std;

namespace FreeTime
{
	class ObjectBridge
	{
	public:
		ObjectBridge();
		vector<short> indices;
		vector<VertexPositionColor> vertices;
	private:

	};
}