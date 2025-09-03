#include "Guerre.h"
Guerre::Guerre() : Vaisseau(60, 4, 14, 16, 7, "guerre", 5, 9)
{
}

Guerre::~Guerre()
{
}

std::string Guerre::to_string()
{
	std::string message = Vaisseau::to_string();

	message.append("Je suis un vaisseau de guerre");
	return message;
}