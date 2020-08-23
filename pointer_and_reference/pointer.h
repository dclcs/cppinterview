//
// Created by dcl on 23/08/2020.
//

#ifndef CPPINTERVIEW_POINTER_H
#define CPPINTERVIEW_POINTER_H

void test_pointer(){
    cout << "##### testing pointer usage" << endl;
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr = (int *)(&a + 1);
    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "a + 1 = " << a + 1 << endl;
    cout << "&a + 1 = " << &a + 1 << endl;
    cout << "ptr = " << ptr << endl;
    cout << "*ptr + 1 = " << *(ptr + 1) << endl;

//    char* str1 = "abc";//0x00000001004041d0
//    char* str2 = "abc";//0x00000001004041d0
////    str1[0] = 'B'; //SIGSEGV (Segmentation fault) 指针指向的是一个常量不能修改
//    cout << "str1 = " << str1 << endl;
//    cout << "str1 == str2 " << (str1 == str2) << endl;
//    char str3[] = "abc";//0x00000000ffffcb88
//    char str4[] = "abc";//0x00000000ffffcb8C
//    cout << "str3 == str4 " << (str3 == str4) << endl;


}

#endif //CPPINTERVIEW_POINTER_H
