//
//  classConstructorRules.cpp
//  CppCore
//
//  Created by paramAki on 2021/11/19.
//

//#include <iostream>
//using namespace std;
//
// 默认情况下，编译器至少给一个类添加三个函数：构造函数，拷贝构造函数，析构函数
// 若用户定义了有参构造函数，编译器不提供无参构造函数，提供拷贝构造函数
// 若用户定义了拷贝构造函数，编译器不提供其他构造函数
//
//class Person{
//public:
//    int m_Age;
//    // 无参构造
//    Person(){
//        cout << "调用Person的无参构造函数" << endl;
//    }
//    // 有参构造
//    Person(int a){
//        m_Age = a;
//        cout << "调用Person的有参构造函数" << endl;
//    }
//    // 拷贝构造
//    Person(const Person &p){
//        m_Age = p.m_Age;
//        cout << "调用Person的拷贝构造函数" << endl;
//    }
//    ~Person(){
//        cout << "调用Person的析构函数" << endl;
//    }
//};
