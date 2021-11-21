//
//  classThisPoint.cpp
//  CppCore
//
//  Created by paramAki on 2021/11/21.
//

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person{
//public:
//    int m_Age;
//    
//    Person(int age){
//        // this指针指向被调用的成员函数所属的对象
//        this->m_Age = age;
//    }
//    
//    // 返回引用类型才能返回原来的对象，不然返回的是拷贝的新对象
//    Person& PersonAdd(Person &p){
//        this->m_Age += p.m_Age;
//        return *this;
//    }
//};
//
//int main(){
//    Person p(10); // this指针指向p
//    cout << "p.m_Age = " << p.m_Age << endl;
//    
//    Person p1(10);
//    Person p2(10);
//    p2.PersonAdd(p1).PersonAdd(p1).PersonAdd(p1);
//    
//    cout << "p2.m_Age = " << p2.m_Age << endl;
//    
//    return 0;
//}
