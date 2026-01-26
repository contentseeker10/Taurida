#include "Application.h"

#include "Taurida/Events/ApplicationEvent.h"
#include "Taurida/Log.h"

namespace Taurida {

	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		TRD_TRACE(e);

		while (true);
	}

}