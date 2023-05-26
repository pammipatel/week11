#ifndef ELECTRICTYPE_H
#define ELECTRICTYPE_H

#include "PocketMonster.h"

class ElectricType : public PocketMonster
{
public:
    ElectricType();
    ElectricType(int atkDmg);
    int attack(std::string defType);
};

#endif
