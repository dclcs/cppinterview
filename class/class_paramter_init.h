//
// Created by dcl_1 on 2020-8-22.
//

#ifndef CPPINTERVIEW_CLASS_PARAMTER_INIT_H
#define CPPINTERVIEW_CLASS_PARAMTER_INIT_H
/**
 * 使用构造函数初始化列表初始化数据成员
 * 没有定义初始化列表的构造函数在构造函数体中对数据成员赋值
 * 对于 const 和 reference 类型成员变量,它们只能呗初始化而不能做赋值操作,因此只能用初始化列表
 * 类的构造哈三年需要调用其基类构造函数时只能有初始化列表
 */
class Obj{
public:
    Obj(int k) : j(k), i(j){}
    /**
     * 初始化列表的初始化顺序与变量声明的顺序一致,而不是按照出现在初始化列表中的顺序.
     * 这里,i比j先声明,因此正确的顺序是先用j对i初始化,然后用2对j进行初始化
     */
    void print(void) {
        cout << i << endl << j << endl;
    }
private:
    int i;
    int j;
};

void test_init_paramter(){
    cout << "##### tesing class init parameter" << endl;
    Obj obj(2);
    obj.print();
}
#endif //CPPINTERVIEW_CLASS_PARAMTER_INIT_H
