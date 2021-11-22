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
//    friend ostream& operator<<(ostream &cout, Person &p);
//    friend Person operator+(Person &p1, Person &p2);
//private:
//    int m_A;
//    int m_B;
//
//public:
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
//// 不能通过成员函数重载<< ,只能通过全局函数重载<<
//ostream& operator<<(ostream &cout, Person &p){
//    cout << "p.m_A = " << p.m_A << endl;
//    cout << "p.m_B = " << p.m_B << endl;
//    
//    return cout;
//}
//
//int main(){
//    Person p1;
//    Person p2;
//
//    Person p3 = p1 + p2;
////    cout << "p3.m_A = " << p3.m_A << endl;
////    cout << "p3.m_B = " << p3.m_B << endl;
//    cout << p3 << endl;// 重载后的<<可以输出Person类型的数据
//
//    return 0;
//}
