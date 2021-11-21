//
//  classConst.cpp
//  CppCore
//
//  Created by paramAki on 2021/11/21.
//

//#include <iostream>
//using namespace std;
//
//class Person{
//public:
//    Person(){
//        m_Age = 10;
//    }
//    
//    // this指针的本质是指针常量，指针的指向不可以改变
//    // const修饰成员函数，本质是修饰this指针，让指针指向的值也不可以修改
//    void func() const {
//        this->m_B = 10;
//    }
//    
//    void showAge(){
//        cout << "age = " << m_Age;
//    }
//    
//    int m_Age;
//    // 特殊变量，添加mutable修饰，在常函数中也可以修改
//    mutable int m_B;
//};
//
//int main(){
//    // 常对象
//    const Person p;
//    p.func();
//    // 常对象只能调用常函数
////    p.showAge();
//    
//    return 0;
//}
