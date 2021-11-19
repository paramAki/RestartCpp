//
//  classClassificationOfConstructors.cpp
//  CppCore
//
//  Created by paramAki on 2021/11/19.
//

//#include <iostream>
//
//using namespace std;
//
//// 构造函数的分类及调用
//// 按照参数分类分为：无参构造（默认构造）和有参构造
//// 按照类型分类分为：普通构造和拷贝构造
//
//class Person{
//public:
//    int age;
//    // 无参构造
//    Person(){
//        cout << "调用Person的无参构造函数" << endl;
//    }
//    // 有参构造
//    Person(int a){
//        age = a;
//        cout << "调用Person的有参构造函数" << endl;
//    }
//    // 拷贝构造
//    Person(const Person &p){
//        age = p.age;
//        cout << "调用Person的拷贝构造函数" << endl;
//    }
//    ~Person(){
////        cout << "调用Person的析构函数" << endl;
//    }
//};
//
//void func01(){
//    // 括号法
////    Person p1;
////    Person p2(10);// 有参构造
////    Person p3(p2);// 拷贝构造
//    // 显示法
//    Person p1;
//    Person p2 = Person(10);// 有参构造
//    Person p3 = Person(p2);// 拷贝构造
//    Person(10);// 匿名对象：当前行之行结束后，系统会立即回收
//
//    // 隐式转换法
//    Person p4 = 10;// 相当于写了   Person p4 = Person(10)
//    Person p5 = p4;// 拷贝构造
//}
//
//int main(){
//    func01();
//    return 0;
//}
