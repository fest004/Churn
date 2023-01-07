#pragma once

#include "Core.h"

	namespace Churn {

class CHURN_API Application
		{
		public:
			Application();
			virtual ~Application();

			void Run();

		};

	//Defined in client EG SandboxApp.cpp 
Application* CreateApplication();


}

