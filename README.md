# Nyxy
Nyxy is an open-source game engine made with C++. The primary focus is a 2D environment with a simplified interpreter.

## Usage

The code below is enough to get the game started!
```cpp
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
```