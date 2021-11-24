//
//  classReloadOperator=.cpp
//  CppCore
//
//  Created by paramAki on 2021/11/24.
//

//#include <iostream>
//
//using namespace std;
//
//class Person{
//    friend int main();
//public:
//    Person(int age){
//        m_Age = new int(age);
//    }
//    ~Person(){
//        if(m_Age != NULL){
//            delete m_Age;
//            m_Age = NULL;
//        }
//    }
//
//    Person& operator=(Person &p){
//        if(m_Age != NULL){
//            delete m_Age;
//            m_Age = NULL;
//        }
//        m_Age = new int(*p.m_Age);
//
//        return *this;
//    }
//private:
//    int *m_Age;
//};
//
//int main(){
//    Person p1(10);
//    Person p2(20);
//    Person p3(30);
//    p1 = p2 = p3;
//    cout << "p1.m_Age = " << *p1.m_Age << endl;
//    cout << "p1.m_Age = " << *p1.m_Age << endl;
//    cout << "p1.m_Age = " << *p1.m_Age << endl;
//
//    return 0;
//}
