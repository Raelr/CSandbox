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
    MyString(const MyString &s);
    MyString(MyString &&s);
    ~MyString();
    void display() const;
    int get_length() const;
    const char *get_str() const;
    MyString operator=(const MyString &rhs);
    MyString operator=(MyString &&rhs);
};

#endif //UDEMYPRACTICE_MYSTRING_H
