#ifndef BankAccount_h
#define BankAccount_h

class BankAccount
{
public:
    BankAccount() {balance = 200;};
    
    double getBalance();
    double deposit(double);
    double withdraw(double);
    
private:
    double balance;
};

#endif /* BankAccount_h */
