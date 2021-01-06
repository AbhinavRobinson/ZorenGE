#include <ZorenGE.h>

class Sandbox : public ZorenGE::Application {
public:

	Sandbox() {
	}

	~Sandbox() {
	}
};

ZorenGE::Application* ZorenGE::CreateApplication() {
	return new Sandbox();
}