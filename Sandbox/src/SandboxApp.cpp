#include <Taurida.h>

class Sandbox : public Taurida::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Taurida::Application* Taurida::CreateApplication()
{
	return new Sandbox();
}