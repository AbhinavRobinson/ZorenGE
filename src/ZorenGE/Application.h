#pragma once

#include "Core.h"

namespace ZorenGE {
	class ZORENGE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in Client
	Application* CreateApplication();
}
