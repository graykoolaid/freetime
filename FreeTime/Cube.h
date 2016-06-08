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
		Cube(vector<short>&, vector<VertexPositionColor>&);
		Cube(vector<short>&, vector<VertexPositionColor>&, float);
		vector<short> indices;
		vector<VertexPositionColor> vertices;
		int index_pos;
		int vertex_pos;
		int number_of_indices;
		int number_of_vertices;
	private:
		void cube_helper(vector<short>&, vector<VertexPositionColor>&, float);
	};

	class Plane : public Renderable
	{
	public:
		Plane();
		Plane(vector<short>&, vector<VertexPositionColor>&);
		Plane(vector<short>&, vector<VertexPositionColor>&, float y);
		vector<short> indices;
		vector<VertexPositionColor> vertices;
		int index_pos;
		int vertex_pos;
		int number_of_indices;
		int number_of_vertices;
	private:
		void plane_helper(vector<short>&, vector<VertexPositionColor>&, float);
	};
}