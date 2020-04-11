#pragma once

#ifdef ELVN_PLATFORM_WINDOWS

extern Eleven::Application* Eleven::CreateApplication();

int main(int argc, char** argv) {

	auto app = Eleven::CreateApplication();
	app->Run();
	delete app;

}

#endif
