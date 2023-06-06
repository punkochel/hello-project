#include "sdk.hpp"

struct IMessage {
	virtual void SendHelloMessage() const = 0;
	virtual void SendGoodbyeMessage() const = 0;
};

SDK_EXPORT IMessage* ComponentLoadPoint();