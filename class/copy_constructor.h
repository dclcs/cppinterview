//
// Created by dcl_1 on 2020-8-24.
//

#ifndef CPPINTERVIEW_COPY_CONSTRUCTOR_H
#define CPPINTERVIEW_COPY_CONSTRUCTOR_H
/**
 * copy constructor会被调用：
 *  1. 一个对象以值传递的方式传入函数体
 *  2. 一个对象以值传递的方式从函数返回
 *  3. 一个对象需要通过另外一个对象进行初始化
 */


class Test{
public:
    int a;
    Test(int x){
        a = x;
    }
    Test(Test &test){//copy constructor
        cout << "copy constructor" << endl;
        a = test.a;
    }
};

void fun1(Test test){
    cout << "fun1()...." << endl;
}

Test fun2(){
    Test t(2);
    cout << "fun2()..." << endl;
    return t;
}

void test_copy_constructor(){
    cout << "##### testing copy constructor...." << endl;
    Test t1(1);
    Test t2 = t1; //用t1对t2进行初始化
    cout << "before fun1() ...." << endl;
    fun1(t1);

//    Test t3 = fun2();
    cout << "after fun2() ...." << endl;
}


#endif //CPPINTERVIEW_COPY_CONSTRUCTOR_H
