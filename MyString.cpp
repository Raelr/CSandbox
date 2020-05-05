//
// Created by Aryeh Zinn on 5/5/20.
//

#include "MyString.h"

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

MyString MyString::operator+(const MyString &rhs) const {
    char *buff = new char[(std::strlen(str) + std::strlen(rhs.get_str())) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.get_str());
    MyString new_str {buff};
    delete [] buff;
    return new_str;
}

MyString MyString::operator-() const {
    char *new_str = new char[std::strlen(str) + 1];
    std::strcpy(new_str, str);
    for (size_t i = 0; i < get_length(); i++) {
        new_str[i] = std::tolower(new_str[i]);
    }
    delete [] new_str;
    MyString new_string {new_str};
    return new_string;
}

std::ostream &operator<<(std::ostream &os, const MyString &rhs) {
    os << rhs.str;
    return os;
}

std::istream &operator>>(std::istream &in, MyString &rhs) {

}