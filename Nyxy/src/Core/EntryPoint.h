#pragma once

#include "Core.h"

#ifdef NE_PLATFORM_WINDOWS

extern Nyxy::Application* Nyxy::CreateApplication();

int main(int argc, char** argv) {
	auto app = Nyxy::CreateApplication();
	app->Run();
	delete app;
}

#endif