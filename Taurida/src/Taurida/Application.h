#pragma once

#include "Core.h"

namespace Taurida {

	class TAURIDA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in a client
	Application* CreateApplication();

}