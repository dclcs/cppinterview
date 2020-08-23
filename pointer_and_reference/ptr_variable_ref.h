//
// Created by dcl_1 on 2020-8-22.
//

#ifndef CPPINTERVIEW_PTR_VARIABLE_REF_H
#define CPPINTERVIEW_PTR_VARIABLE_REF_H

#include <iostream>
using namespace std;
/**
 * 指针变量引用
 * 形如：int* &pa = p; => pa是指针p的引用
 */
void test_ptr_variable_ref(){
    cout << "##### testing pointer vaiable reference" << endl;
    int a= 1;
    int b = 10;
    int* p = &a;//取地址符, p指针指向a
    int* &pa = p; //引用，pa是p的引用

    (*p) ++;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "*p = " << *p << endl;

    pa = &b;
    (*pa) ++;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "*p = " << *p << endl;
}


void swap(char* &x, char* &y){
    char* temp;
    temp = x;
    x = y;
    y = temp;
}

void test_swap_string(){
    cout << "##### test swap string" << endl;
    char *ap = "hello";
    char *bp = "how are you?";

    cout << "ap : " << ap << endl;
    cout << "bp : " << bp << endl;

    swap(ap, bp);

    cout << "ap : " << ap << endl;
    cout << "bp : " << bp << endl;
}


#endif //CPPINTERVIEW_PTR_VARIABLE_REF_H
