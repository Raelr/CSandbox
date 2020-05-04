//
// Created by Aryeh Zinn on 5/5/20.
//

#include "MyString.h"
#include <cstring>
#include <iostream>

MyString::MyString()
    : str{nullptr}  {
    str = new char[1];
    *str = '\0';
}

MyString::MyString(const char *s)
    : str {nullptr} {
    if (s == nullptr) {
        str = new char[1];
        *str = '\0';
    } else {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

MyString::MyString(MyString &&s)
    : str {nullptr} {
    str = new char[std::strlen(s.str) + 1];
    std::strcpy(str, s.str);
    delete [] s.str;
}

MyString::MyString(const MyString &s)
    :str{nullptr}  {
    str = new char[std::strlen(s.str) + 1];
    std::strcpy(str, s.str);
}

MyString::~MyString() {
    delete [] str;
}

const char * MyString::get_str() const {
    return str;
}

void MyString::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

int MyString::get_length() const {
    return std::strlen(str);
}

MyString MyString::operator=(const MyString &rhs) {
    if (this == &rhs) {
        return *this;
    }
    delete [] str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
    return *this;
}

MyString MyString::operator=(MyString &&rhs) {
    if (this == &rhs) {
        return *this;
    }
    delete [] str;

    str = rhs.str;
    rhs.str = nullptr;
    return *this;

}