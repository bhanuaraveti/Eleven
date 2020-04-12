#pragma once

#ifdef ELVN_PLATFORM_WINDOWS

extern Eleven::Application* Eleven::CreateApplication();

int main(int argc, char** argv) {
	Eleven::Log::Init();
	ELVN_CORE_WARN("Initialized log!");
	int a = 5;
	ELVN_INFO("Hello! Var={0}", a);

	auto app = Eleven::CreateApplication();
	app->Run();
	delete app;

}

#endif
