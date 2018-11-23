#include <stdio.h>
#include "BankAccount.h"

double BankAccount::getBalance()
{
    return balance;
}

double BankAccount::deposit(double amount)
{
    balance = balance + amount;
    
    return balance;
}

double BankAccount::withdraw(double wdAmount)
{
    balance = balance - wdAmount;
    
    return balance;
}
