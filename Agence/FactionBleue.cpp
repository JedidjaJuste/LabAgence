#include "FactionBleue.h"
FactionBleue::FactionBleue(int attaqueNew, int defenseNew, int vieNew, int capaciteNew, string nomNew)
	: Faction(attaqueNew, defenseNew, vieNew, capaciteNew, nomNew)
{
	attaque = defenseNew * 2;
}

FactionBleue::~FactionBleue()
{

}

string FactionBleue::to_string()
{
	string message = Faction::to_string();
	message.append("Je suis une faction bleue");

	return message;
}