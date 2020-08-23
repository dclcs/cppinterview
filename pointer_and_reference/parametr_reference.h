//
// Created by dcl_1 on 2020-8-22.
//

#ifndef CPPINTERVIEW_PARAMETR_REFERENCE_H
#define CPPINTERVIEW_PARAMETR_REFERENCE_H


const float pi = 3.14f;
float f;

float f1(float r){
    f = r * r * pi;
    return f;
}

float& f2(float r){
    f = r * r * pi;
    return f;
}

void test_parameter_reference(){
    cout << "##### testing paramter reference" << endl;
    float f1(float = 5);
    float& f2(float = 5);
    float a = f1();
//    float& b = f1();//对临时变量temp进行引用发生错误
    float c = f2();//直接把f返回给c
    float& d = f2();

    d += 1.0f;

    cout << "a  = " << a << endl;
//    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    cout << "f = " << f << endl;

}

#endif //CPPINTERVIEW_PARAMETR_REFERENCE_H
