//
// Created by dcl_1 on 2020-8-24.
//

#ifndef CPPINTERVIEW_STRING_POINTER_H
#define CPPINTERVIEW_STRING_POINTER_H

void test_string_pointer(){
    cout << "##### testing string pointer" << endl;
    char *str[] = {"Welcome", "to" , "Fortemedia", "Nanjing"};

    char **p = str + 1; //**p = "to"
    str[0] = *p + 2;
    *p ++;
    str[1] = *(p + 1);
    str[2] = p[1] + 3;
//    str[0] = (*p ++) + 2; // *(p) + 2; p ++; p->Fortemedia;
//    str[1] = *(p+1);//str[1] = Nanjing
//    str[2] = p[1] + 3;
//    str[3] = p[0] + (str[2] - str[1]);
    cout << "str[0] = " << str[0] << endl;
    cout << "str[1] = " << str[1] << endl;
    cout << "str[2] = " << str[2] << endl;
    cout << "str[3] = " << str[3] << endl;


}

#endif //CPPINTERVIEW_STRING_POINTER_H
