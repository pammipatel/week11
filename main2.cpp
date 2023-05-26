#include "PocketMonster.h"
#include "ElectricType.h"
#include <iostream>
int main()
{
    PocketMonster* monster = new ElectricType(15);
    int damage = monster->attack("water");

    std::cout << "Damage: " << damage << std::endl;

    delete monster;

    return 0;
}
