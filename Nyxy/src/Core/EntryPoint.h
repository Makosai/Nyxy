#pragma once

#ifdef NE_PLATFORM_WINDOWS

extern Nyxy::Application* Nyxy::CreateApplication();

int main(int argc, char** argv) {
	Nyxy::Log::Init();
	Nyxy::Log::GetCoreLogger()->info("Nyxy Engine started.");

	auto app = Nyxy::CreateApplication();
	app->Run();
	delete app;
}

#endif