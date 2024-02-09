#include <Nyxy.h>

class Simul : public Nyxy::Application {
public:
	Simul() {}

	~Simul() {}
};

Nyxy::Application* Nyxy::CreateApplication() {
	return new Simul();
}