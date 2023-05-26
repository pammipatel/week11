#include "BaseAccount.h"

BaseAccount::BaseAccount()
{
    balance = 0;
}

void BaseAccount::deposit(double amount)
{
    balance += amount;
}

double BaseAccount::getBalance()
{
    return balance;
}

void BaseAccount::monthlyCalc()
{
    double interest = balance * 0.01;
    double fees = balance * 0.02 + 50;

    balance += interest;
    balance -= fees;
}
