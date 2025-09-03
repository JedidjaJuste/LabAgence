#include "Transport.h"
Transport::Transport() :Vaisseau(40, 9, 3, 6, 0, "transport", 13, 7)
{
}

Transport::~Transport()
{
}

std::string Transport::to_string()
{
	std::string message = Vaisseau::to_string();

	message.append("Je suis un vaisseau de transport");
	return message;
}