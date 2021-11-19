//
//  classTimeToCallCopyConstructors.cpp
//  CppCore
//
//  Created by paramAki on 2021/11/19.
//

//#include <iostream>
//using namespace std;
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
//
//void doWork(const Person p){
//    
//}
//
//Person doWork2(){
//    Person p;
//    return p;
//}
//
//void func01(){
//    Person p1(10);
//    doWork(p1);
//}
//
//void func02(){
//    Person p1 = doWork2();
//}
//
//int main(){
//    func02();
//    return 0;
//}
