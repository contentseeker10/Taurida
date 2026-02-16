#include <Taurida.h>

class ExampleLayer : public Taurida::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		TRD_INFO("ExampleLayer::Update");
	}

	void OnEvent(Taurida::Event& event) override
	{
		TRD_TRACE("{0}", event);
	}
};

class Sandbox : public Taurida::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
		PushOverlay(new Taurida::ImGuiLayer());
	}

	~Sandbox()
	{

	}

};

Taurida::Application* Taurida::CreateApplication()
{
	return new Sandbox();
}