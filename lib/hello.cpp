#include <iostream>

class HelloWorld {
public:
	HelloWorld() {}
	void say()
	{
		std::cout << "Hello, World!" << std::endl;
	}
};

void sayHello()
{
	HelloWorld hw;
	hw.say();
}