#include <Eleven.h>

class Sandbox : public Eleven::Application
{
public:
	Sandbox()
	{
	}

	~Sandbox()
	{
	}
};

Eleven::Application* Eleven::CreateApplication()
{
	return new Sandbox();
}