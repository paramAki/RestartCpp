//
//  abstractClass.cpp
//  CppCore
//
//  Created by paramAki on 2021/11/25.
//

//#include <iostream>
//using namespace std;
//
//class Base{
//public:
//    // 纯虚函数，拥有纯虚函数的类为抽象类
//    // 抽象类特点
//    // 1、抽象类无法实例化对象
//    // 2、抽象类的子类必须重写纯虚函数，否则也是抽象类
//    virtual void func() = 0;
//};
//
//class Son : public Base{
//public:
//    void func(){
//        cout << "Son func()" << endl;
//    }
//};
//
//int main(){
//    Base * b = new Son;
//    b->func();
//    
//    return 0;
//}
