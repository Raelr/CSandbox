//
// Created by Aryeh Zinn on 5/5/20.
//

#ifndef UDEMYPRACTICE_MYSTRING_H
#define UDEMYPRACTICE_MYSTRING_H


class MyString {

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
};

#endif //UDEMYPRACTICE_MYSTRING_H
