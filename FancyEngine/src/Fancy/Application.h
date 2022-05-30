#pragma once

#include "Core.h"

namespace Fancy {


	class FANCY_API Application
	{
	public:
		Application();
		virtual~Application();

		void Run();
	};


	//To Be Defined in Client
	Application* CreateApplication();

}