#ifndef BASEACCOUNT_H
#define BASEACCOUNT_H

class BaseAccount
{
protected:
    double balance;

public:
    BaseAccount();
    void deposit(double amount);
    double getBalance();
    void monthlyCalc();
};

#endif
