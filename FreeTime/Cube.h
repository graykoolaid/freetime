#pragma once
#include "../Content/ShaderStructures.h"
#include <DirectXMath.h>

namespace FreeTime
{
	class Cube
	{
	public:
		Cube();
		unsigned short * indices;
		VertexPositionColor * vertices;
		short indice_len;
		short vertice_len;
	private:
			
	};
}