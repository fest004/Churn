#include <Churn.h>
#include <stdio.h>


class Sandbox : public Churn::Application 
{
public: 
	Sandbox()
	{
	}

	~Sandbox()
	{

	}
};

Churn::Application* Churn::CreateApplication() 
{
	return new Sandbox();
}


