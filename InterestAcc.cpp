#include "InterestAcc.h"

InterestAcc::InterestAcc()
{
    balance = 0;
    rate = 0.05;
}

InterestAcc::InterestAcc(double pRate)
{
    balance = 0;
    rate = pRate;
}

void InterestAcc::monthlyCalc()
{
    double interest = balance * rate;
    double fees = balance * 0.02 + 50;

    balance += interest - fees;
}
