#include "BaseAccount.h"
#include "InterestAcc.h"
#include <iostream>
int main()
{
    BaseAccount base;
    InterestAcc interest;

    base.deposit(1000.0);
    interest.deposit(2000.0);

    base.monthlyCalc();
    interest.monthlyCalc();

    std::cout << "BaseAccount Balance: $" << base.getBalance() << std::endl;
    std::cout << "InterestAcc Balance: $" << interest.getBalance() << std::endl;

    return 0;
}
