#pragma once

#include "..\..\Others\PerseusLibDefines.h"

#include "..\..\Renderer\Model\ModelFace.h"
#include "..\..\Renderer\Model\ModelVertex.h"

//#include <vector>

namespace Renderer
{
	namespace Model3D
	{
		class ModelGroup
		{
		public:

			std::vector<ModelFace*> faces;
			char* groupName;

			ModelGroup(char* groupName);
			ModelGroup(void);
			~ModelGroup(void);
		};
	}
}