#pragma once
#include <string>
using namespace std;
class Faction
{
protected:
	int attaque;
	int defense;
	int vie;
	int capacite;
	string nom;

public:
	Faction(int attaque, int defense ,int vie ,int capacite, string nom);
	Faction(int attaque, int defense ,int vie ,int capacite);
	~Faction();

	inline string getNom() { return nom; }
	
	virtual string to_string();
};

