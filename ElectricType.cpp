#include "ElectricType.h"

ElectricType::ElectricType()
{
    // Default values
    hp = 100;
    attackDmg = 10;
}

ElectricType::ElectricType(int atkDmg)
{
    hp = 100;
    attackDmg = atkDmg;
}

int ElectricType::attack(std::string defType)
{
    if (defType == "water")
    {
        return static_cast<int>(attackDmg * 1.5);
    }
    else if (defType == "rock")
    {
        return attackDmg / 2;
    }
    else
    {
        return attackDmg;
    }
}
