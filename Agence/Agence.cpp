#include <iostream>
#include "FactionBleue.h"
#include "FactionRouge.h"
#include "Transport.h"

int main()
{

    FactionBleue factionBleue(10, 25, 16, 80, "Bleue");
    FactionRouge factionRouge(15, 11, 12, 65, "Rouge");
    Transport transport1;

    cout << factionBleue.to_string();
    std::cout << "\n---------------------------------\n";
    cout << factionRouge.to_string();
    std::cout << "\n---------------------------------\n";
    cout << transport1.to_string();

}
