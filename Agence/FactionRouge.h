#pragma once
#include "Faction.h"
class FactionRouge :
	public Faction
{
public:
	FactionRouge(int attaque, int defense, int vie, int capacite, string nom);
	~FactionRouge();

	virtual string to_string();
};

