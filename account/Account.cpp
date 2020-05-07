//
// Created by Aryeh Zinn on 8/5/20.
//

#include "Account.h"

Account::Account(std::string name, double balance)
    : name{name}, balance{balance} {
}

bool Account::deposit(double amount) {
    bool is_viable = false;
    if (amount > 0) {
        balance += amount;
        is_viable = true;
    }
    return is_viable;
}

bool Account::withdraw(double amount) {
    bool is_viable = false;
    if ((balance-amount) >= 0) {
        balance -= amount;
        is_viable = true;
    }
    return is_viable;
}