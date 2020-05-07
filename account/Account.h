//
// Created by Aryeh Zinn on 8/5/20.
//

#ifndef UDEMYPRACTICE_ACCOUNT_H
#define UDEMYPRACTICE_ACCOUNT_H

#include <iostream>
#include <string>

class Account {
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
protected:
    std:string name;
    double balance;
public:
    Account(std::string = "Unnamed Account", double balance = 0.0);
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance() const;
};


#endif //UDEMYPRACTICE_ACCOUNT_H
