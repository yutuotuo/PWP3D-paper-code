#pragma once

#include <stdio.h>
#include <vector>

#include "..\..\Others\PerseusLibDefines.h"

#include "..\..\Renderer\Model\ModelGroup.h"
#include "..\..\Renderer\Model\ModelVertex.h"
#include "..\..\Renderer\Model\ModelH.h"

using namespace Renderer::Model3D;

namespace Renderer
{
	namespace Model3D
	{
		class Model
		{
		private:
			int createFromFile(FILE *file);
		public:

			std::vector<ModelGroup*> groups;
			std::vector<ModelVertex> vertices;

			VFLOAT* verticesVector;

			VFLOAT minZ;

			int faceCount;

			Model(void);
			Model(char* fileName);
			Model(std::string fileName);
			Model(FILE* f);

			Model* Clone();
			
			void ToModelH(ModelH* newModel);
			void ToModelHInit(ModelH* newModel);

			~Model(void);
		};
	}
}