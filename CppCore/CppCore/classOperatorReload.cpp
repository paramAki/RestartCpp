//
//  classOperatorReload.cpp
//  CppCore
//
//  Created by paramAki on 2021/11/22.
//

//#include <iostream>
//using namespace std;
//
//class Person{
//public:
//    int m_A;
//    int m_B;
//
//    Person(){
//        m_A = 10;
//        m_B = 20;
//    }
//
//    // 通过成员函数重载运算符+号
////    Person operator+(Person &p){
////        Person temp;
////        temp.m_A = this->m_A + p.m_A;
////        temp.m_B = this->m_B + p.m_B;
////
////        return temp;
////    }
//};
//
//// 全局函数重载运算符+号
//Person operator+(Person &p1, Person &p2){
//    Person temp;
//    temp.m_A = p1.m_A + p2.m_A;
//    temp.m_B = p1.m_B + p2.m_B;
//    return temp;
//}
//
//int main(){
//    Person p1;
//    Person p2;
//
//    Person p3 = p1 + p2;
//    cout << "p3.m_A = " << p3.m_A << endl;
//    cout << "p3.m_B = " << p3.m_B << endl;
//
//
//    return 0;
//}
