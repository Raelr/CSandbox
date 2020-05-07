//
// Created by Aryeh Zinn on 5/5/20.
//

#ifndef UDEMYPRACTICE_MYSTRING_H
#define UDEMYPRACTICE_MYSTRING_H

#include <cstring>
#include <iostream>

class MyString {

    friend std::ostream &operator<<(std::ostream &os, const MyString &rhs);
    friend std::istream &operator>>(std::istream &in, MyString &rhs);

private:
    char *str;
public:
    MyString();
    MyString(const char *str);
    MyString(const MyString &s); // Copy constructor
    MyString(MyString &&s); // Move constructor (now that I think about it, is this necessary?)
    ~MyString();
    void display() const;
    int get_length() const;
    const char *get_str() const;
    MyString operator=(const MyString &rhs); // Copy assignment operator
    MyString operator=(MyString &&rhs); // Move assignment operator
    MyString operator+(const MyString &rhs) const;
    MyString operator-() const;
    bool operator==(const MyString &rhs) const;
    bool operator>(const MyString &rhs) const;
    bool operator<(const MyString &rhs) const;
    MyString operator+=(const MyString &rhs) const;
};

#endif //UDEMYPRACTICE_MYSTRING_H
