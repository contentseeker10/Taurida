#pragma once

#ifdef TRD_PLATFORM_WINDOWS

extern Taurida::Application* Taurida::CreateApplication();

int main(int argc, char** argv) 
{
	printf("Taurida Engine\n");
	auto app = Taurida::CreateApplication();
	app->Run();
	delete app;
}

#endif