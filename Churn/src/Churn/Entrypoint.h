#pragma once

#ifdef CH_PLATFORM_WINDOWS

extern Churn::Application* Churn::CreateApplication();

int main(int argc, char** argv) {


	auto app = Churn::CreateApplication();
	app->Run();
	delete app;
}

#endif // 

