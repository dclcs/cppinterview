//
// Created by dcl on 23/08/2020.
//

#ifndef CPPINTERVIEW_NUMBER_TO_STRING_H
#define CPPINTERVIEW_NUMBER_TO_STRING_H
#include <stdlib.h>
#include <cstdlib>
#include <stdio.h>
#include <string.h>
using namespace std;



void in2str(int n, char *str){
    char buf[10] = "";
    int i = 0;
    int len = 0 ;
    int temp = n < 0 ? -n : n;
    if(str == nullptr) return;
    while(temp){
        buf[i ++] = (temp % 10) + '0';
        temp = temp / 10;
    }
    len = n < 0 ? ++i : i;
    str[i] = '\0';
    while (1){
        i --;
        if(buf[len - 1 - i] == 0){
            break;
        }
        str[i] = buf[len - i - 1];
    }
    if(i == 0){
        str[i] = '-';
    }
}

/**
 * itoa : int -> string
 * ltoa : long -> string
 * utoa : unsigned -> string
 * gcvt : float -> string
 * ecvt : double -> string
 */
void test_number_to_string(){
    cout << "##### testing number to string using built-in function" << endl;
    int num_int = 435;
    double num_double = 435.10f;
    char str_int[30];
    char str_double[30];
//    itoa(num_int, str_int, 10);
//    gcvt(num_double, 8, str_double);

//    cout << "str_int = " << str_int << endl;

    cout << "##### testing number to string using user-defined function" << endl;
    int nNum = 134;
    char res[10];
    in2str(nNum, res);
    cout << "in2str(431)  = " << res << endl;
}
#endif //CPPINTERVIEW_NUMBER_TO_STRING_H
