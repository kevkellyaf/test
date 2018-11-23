#include <stdio.h>
#include <iostream>
#include "BankAccount.h"
using namespace std;

int main()
{
    BankAccount obj;
    int userInput = 0;
    double depositAmount = 0;
    double wdAmount = 0;
    double newBal = 0;
    
    try
    {
        cout << "Enter # for what you'd like to do" << endl;
        cout << "1. GetBalance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        
        cin >> userInput;
        switch (userInput)
        {
            case 1:
                cout << obj.getBalance() << endl;
                break;
                
            case 2:
                cout << "Enter amount to deposit" << endl;
                cin >> depositAmount;
                newBal = obj.deposit(depositAmount);
                cout << "New Balance is $" << newBal << endl;
                break;
                
            case 3:
                cout << "Enter amount to withdraw" << endl;
                cin >> wdAmount;
                newBal = obj.deposit(wdAmount);
                cout << "New Balance is $" << newBal << endl;
                break;
                
            default:
                break;
        }
    }
    catch (int e)
    {
        cout << "Error number " << e << endl;
    }
    
    return 0;
}
