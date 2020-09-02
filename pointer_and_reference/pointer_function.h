//
// Created by dcl_1 on 2020-8-24.
//

#ifndef CPPINTERVIEW_POINTER_FUNCTION_H
#define CPPINTERVIEW_POINTER_FUNCTION_H
/**
 * 指针函数：带指针的函数，本质是一个函数，返回类型是某一类型的指针
 * 函数指针：指向函数的指针变量，因为它本身应该是指针变量，
 *          只不过该指针指向函数
 */
int max(int x, int y){
    return x > y ? x : y;
}
float *find(float *p, int x){
    return p + x;
}
void test_pointer_function(){
    cout << "##### testing pointer function" << endl;
    float score[] = {10, 20, 30 , 40};
    int (*p) (int , int); //函数指针
    float *q = find(score + 1, 1);
    int a;

    p = max;
    a = (*p)(1, 2);

    cout << "a = " << a << endl;
    cout << "*q = " << *q << endl;
}

#endif //CPPINTERVIEW_POINTER_FUNCTION_H
