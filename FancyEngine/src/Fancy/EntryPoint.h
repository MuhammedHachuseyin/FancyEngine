#pragma once

#ifdef FY_PLATFORM_WINDOWS

extern Fancy::Application* Fancy::CreateApplication();

void main(int argc,char** argv)
{
	
	auto app = Fancy::CreateApplication();
	app->Run();
	delete app;
}

#endif // FY_PLATFORM_WINDOWS


