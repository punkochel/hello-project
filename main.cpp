#include "lib/message.hpp"

int main()
{
	IMessage* p = ComponentLoadPoint();
	p->SendHelloMessage();
	p->SendGoodbyeMessage();
	return 0;
}