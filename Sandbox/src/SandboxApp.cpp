#include <Fancy.h>

class Sandbox :public  Fancy::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Fancy::Application* Fancy::CreateApplication()
{
	return new Sandbox();
}