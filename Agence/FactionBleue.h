#pragma once
#include "Faction.h"
class FactionBleue : 
	public Faction
{
public:
	FactionBleue(int attaque, int defense, int vie, int capacite, string nom);
	~FactionBleue();

	virtual string to_string();
};

