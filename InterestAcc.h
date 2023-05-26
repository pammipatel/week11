#ifndef INTERESTACC_H
#define INTERESTACC_H

#include "BaseAccount.h"

class InterestAcc : public BaseAccount
{
private:
    double rate;

public:
    InterestAcc();
    InterestAcc(double pRate);
    void monthlyCalc();
};

#endif
