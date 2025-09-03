#pragma once
#include <string>
class Vaisseau
{
protected :
	int valeurMarchande;
	int attaque;
	int defense;
	int vie;
	int capacite;
	std:: string nom;
	int niveau;
	int exp;

public :
	Vaisseau(int valeurMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp);
	~Vaisseau();

	inline int getValeurMarchande() { return valeurMarchande; }

	int getAtt();
	int getDef();
	int getVie();

	virtual std::string to_string();
};

