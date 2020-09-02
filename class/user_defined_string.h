//
// Created by dcl_1 on 2020-8-24.
//

#ifndef CPPINTERVIEW_USER_DEFINED_STRING_H
#define CPPINTERVIEW_USER_DEFINED_STRING_H
#include <iostream>
using namespace std;
class MyString{
public:
    MyString(const char* str = nullptr);
    MyString(const MyString& other);
    ~MyString(void);
    MyString& operator = (const MyString& other);
    //返回值是ＭｙＳｔｒｉｎｇ是为了可以连续赋值

    friend ostream& operator<<(ostream&, const MyString&);
private:
    char *my_string;
};

MyString::MyString(const char *str) {
    cout << "构造函数...." << endl;
    if(str == nullptr){
        my_string = new char[1];
        *my_string = '\0';
    }else{
        my_string = new char[strlen(str) + 1];
        strcpy(my_string, str);
    }
}

MyString::MyString(const MyString &other) {
    cout << "拷贝构造...." << endl;
    my_string = new char[strlen(other.my_string) + 1];
    strcpy(my_string, other.my_string);
}

MyString& MyString::operator=(const MyString &other) {
    cout << "operator = function" << endl;
    if(this == &other){
        return *this;
    }
    delete[] my_string;
    my_string = new char[strlen(other.my_string) + 1];
    strcpy(my_string, other.my_string);
    return *this;
}
MyString::~MyString() {
    cout << "deconstructing ..." << endl;
    if(my_string != nullptr){
        delete [] my_string;
        my_string = nullptr;
    }
}

ostream& operator << (ostream& out , const MyString& ms){
    out << ms.my_string ;
    return (out);
}
void test_mystring(){
    cout << "##### testing mystring "<< endl;
    MyString a("hello");
    MyString b("world");
    MyString c(a);
    MyString d("happy");
    c = b = a;
//    c = b;
    cout << c << endl;
}
#endif //CPPINTERVIEW_USER_DEFINED_STRING_H
