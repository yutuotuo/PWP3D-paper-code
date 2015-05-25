#pragma once

#include "..\Utils\ImageUtils.h"
#include "..\Objects\Object3D.h"
#include "..\Objects\View3D.h"
#include "..\Objects\StepSize3D.h"
#include "..\Renderer\Engine\DrawingEngine.h"

using namespace PerseusLib::Primitives;
using namespace PerseusLib::Objects;
using namespace PerseusLib::Utils;
using namespace Renderer::Engine;

namespace PerseusLib
{
	namespace Utils
	{
		class VisualisationEngine
		{
		private:
			static VisualisationEngine* instance;

			ImageUChar *bufferGrey;

			void computePosteriors(Object3D* object, View3D* view);
			
		public:
			static VisualisationEngine* Instance(void) {
				if (instance == NULL) instance = new VisualisationEngine();
				return instance;
			}

			void Initialise(int width, int height);
			void Shutdown();

			void GetImage(ImageUChar4* image, GetImageType getImageType, Object3D* object, View3D* view, Pose3D *pose);

			VisualisationEngine(void) { }
			~VisualisationEngine(void) { }
		};
	}
}