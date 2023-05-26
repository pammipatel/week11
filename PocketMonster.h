#ifndef POCKETMONSTER_H
#define POCKETMONSTER_H

#include <string>

class PocketMonster
{
protected:
    int hp;
    int attackDmg;

public:
    PocketMonster();
    virtual int attack(std::string defType) = 0;
};

#endif
