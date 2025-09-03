#include "Vaisseau.h"

Vaisseau::Vaisseau(int valeurMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp) : valeurMarchande(valeurMarchande), attaque(attaque), defense(defense), vie(vie), capacite(capacite), nom("JUSTE"), niveau(niveau), exp(exp)
{

}

Vaisseau::~Vaisseau()
{ }


std::string Vaisseau::to_string()
{
	std::string info;
	info.append("nom : " + nom + "\n");
	info.append("valeurMarchande : " + std::to_string(this->valeurMarchande) + "\n");
	info.append("capacite : " + std::to_string(this->capacite) + "\n");
	info.append("niveau : " + std::to_string(this->niveau) + "\n");
	info.append("exp : " + std::to_string(this->exp) + "\n");
	info.append("attaque : " + std::to_string(this->getAtt()) + "\n");
	info.append("defense : " + std::to_string(this->getDef()) + "\n");
	info.append("vie : " + std::to_string(this->getVie()) + "\n");

	return info;
}

int Vaisseau::getAtt()
{
	return attaque;
}

int Vaisseau::getDef()
{
	return defense;
}

int Vaisseau::getVie()
{
	return vie;
}

