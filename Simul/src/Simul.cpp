#include <Nyxy.h>

#include <stdio.h>

class Simul : public Nyxy::Application {
public:
	Simul() {}

	~Simul() {}
};

Nyxy::Application* Nyxy::CreateApplication() {
	printf("Welcome to Simul!");
	return new Simul();
}