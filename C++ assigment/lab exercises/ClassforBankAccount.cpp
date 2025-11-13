#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance; 

public:

    BankAccount() {
        balance = 0;
    }

    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};
main() {
    BankAccount account;

    account.deposit(1000);
    account.withdraw(500);
    account.showBalance();

}

