#pragma once

#include "Core.h"

namespace Nyxy {
	class NYXY_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Define in the GAME
	Application* CreateApplication();
}
