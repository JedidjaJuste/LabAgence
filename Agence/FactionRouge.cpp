#include "FactionRouge.h"
FactionRouge::FactionRouge(int attaqueNew, int defenseNew, int vieNew, int capaciteNew, string nomNew)
	: Faction(attaqueNew, defenseNew, vieNew, capaciteNew, nomNew)
{
	attaque = defenseNew * 5;
}

FactionRouge::~FactionRouge() 
{
}

string FactionRouge::to_string()
{
	string message = Faction::to_string();
	message.append("Je suis une faction Rouge");

	return message;
}
