#pragma once

#ifdef ZGE_PLATFORM_WINDOWS

extern ZorenGE::Application* ZorenGE::CreateApplication();

int main(int argc, char** argv) {
	printf("Zoren Engine");
	auto app = ZorenGE::CreateApplication();
	app->Run();
	delete app;
}

#endif