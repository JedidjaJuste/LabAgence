#include "Faction.h"
Faction::Faction(int attaque, int defense, int vie, int capacite, std::string nom) : attaque(attaque), defense(defense), vie(vie), capacite(capacite), nom(nom)
{

}

Faction::Faction(int attaque, int defense, int vie, int capacite) : attaque(attaque), defense(defense), vie(vie), capacite(capacite)
{

}

Faction::~Faction()
{

}

string Faction::to_string()
{
	string info;
	info.append("nom : " + nom + "\n");
	info.append("attaque : " + std::to_string(this->attaque) + "\n");
	info.append("defense : " + std::to_string(this->defense) + "\n");
	info.append("vie : " + std::to_string(this->vie) + "\n");
	info.append("capacite : " + std::to_string(this->capacite) + "\n");

	return info;
}