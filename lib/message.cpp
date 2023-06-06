#include "message.hpp"
#include <iostream>

class Message final : public IMessage {
public:
	void SendHelloMessage() const override
	{
		std::cout << "Hello, World!" << std::endl;
	}
	void SendGoodbyeMessage() const override
	{
		std::cout << "Goodbye, World!" << std::endl;
	}
	~Message()
	{
		delete this;
	}
};

IMessage* ComponentLoadPoint()
{
	return new Message;
}