//
// Created by dcl_1 on 2020-8-22.
//

#ifndef CPPINTERVIEW_CLASS_DECLARE_H
#define CPPINTERVIEW_CLASS_DECLARE_H

struct Test{
    Test(int i = 0) {}
    Test() {}
    void fun(){}
};


void test_class_decalre(){
    Test a(1);
    a.fun();
//    Test b();//不带参数的构造函数时不需要加小括号
//    b.fun();
}
#endif //CPPINTERVIEW_CLASS_DECLARE_H
