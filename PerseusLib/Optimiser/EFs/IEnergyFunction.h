#pragma once

#include "..\..\Objects\IterationConfiguration.h"
#include "..\..\Objects\Object3D.h"
#include "..\..\Objects\View3D.h"

#include "..\..\Renderer\Engine\DrawingEngine.h"

using namespace PerseusLib::Objects;
using namespace Renderer::Engine;

namespace PerseusLib
{
	namespace Optimiser
	{
		class IEnergyFunction
		{
		public:
			virtual void GetFirstDerivativeValues(Object3D ***objects, int *objectCount, View3D** views, int viewCount, IterationConfiguration* iterConfig) = 0;
			virtual void PrepareIteration(Object3D ***objects, int *objectCount, View3D** views, int viewCount, IterationConfiguration* iterConfig) = 0;

			IEnergyFunction(void) { }
			virtual ~IEnergyFunction(void) { }
		};
	}
}