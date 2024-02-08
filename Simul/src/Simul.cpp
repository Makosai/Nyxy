#include <Nyxy.h>

#include <stdio.h>

class Simul : public Nyxy::Application {
public:
	Simul() {}

	~Simul() {}
};

int main() {
	printf("Welcome to Simul!");
	Simul* app = new Simul();
	app->Run();
	delete app;
}