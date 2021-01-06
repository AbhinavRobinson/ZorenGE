#include <ZorenGE.h>

class Sandbox : public ZorenGE::Application {
	public:

		Sandbox() {

		}

		~Sandbox() {

		}

};

int main() {
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
}