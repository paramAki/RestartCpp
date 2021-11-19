//
//  classDeepCopyAndShallowCopy.cpp
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
//    int *m_Height;
//    // 无参构造
//    Person(){
//        cout << "调用Person的无参构造函数" << endl;
//    }
//    // 有参构造
//    Person(int a, int height){
//        m_Age = a;
//        m_Height = new int(height);
//        cout << "调用Person的有参构造函数" << endl;
//    }
//    // 拷贝构造，深拷贝解决浅拷贝带来的问题
//    // 浅拷贝：编译器提供的=赋值
//    // 深拷贝：程序员自己在堆区创建内存存放数据
//    Person(const Person &p){
//        m_Age = p.m_Age;
//        m_Height = new int(*p.m_Height);
//        cout << "调用Person的拷贝构造函数" << endl;
//    }
//    ~Person(){
//        // 析构函数，将堆区开辟的数据释放
//        if(m_Height != NULL){
//            delete m_Height;// 浅拷贝带来问题，重复销毁
//            m_Height = NULL;
//        }
//        cout << "调用Person的析构函数" << endl;
//    }
//};
//
//void func01(){
//    Person p1(10, 160);
//    cout << "p1 的年龄：" << p1.m_Age << "p1 的身高：" << *p1.m_Height << endl;
//
//    Person p2(p1);
//    cout << "p2 的年龄：" << p2.m_Age << "p2 的身高：" << *p2 .m_Height << endl;
//}
//
//int main(){
//    func01();
//
//    return 0;
//}
