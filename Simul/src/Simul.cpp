#include <Nyxy.h>

class Simul : public Nyxy::Application {
public:
	Simul() {}

	~Simul() {}
};

void main() {
	Simul* app = new Simul();
	app->Run();
	delete app;
}