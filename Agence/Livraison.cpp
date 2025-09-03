#include "Livraison.h"
Livraison::Livraison() : Vaisseau(50, 12, 2, 4, 5, "transport", 12, 5) {}

Livraison::~Livraison()
{
}

std::string Livraison::to_string()
{
	std::string message = Vaisseau::to_string();

	message.append("Je suis un vaisseau de livraison");
	return message;
}