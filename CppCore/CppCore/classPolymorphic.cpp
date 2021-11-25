//
//  classPolymorphic.cpp
//  CppCore
//
//  Created by paramAki on 2021/11/25.
//

//#include <iostream>
//using namespace std;
//
//class Animal{
//public:
//    virtual void func(){
//        cout << "Animal" << endl;
//    }
//};
//
//class Cat : public Animal{
//public:
//    // 子类重写虚函数
//    // 重写：返回值，函数名，参数列表完全相同
//    void func(){
//        cout << "Cat" << endl;
//    }
//};
//
//class Dog : public Animal{
//public:
//    // 子类重写虚函数
//    // 重写：返回值，函数名，参数列表完全相同
//    void func(){
//        cout << "Dog" << endl;
//    }
//};
//
//void DoFunc(Animal &animal){//Animal &animal = cat
//    animal.func();
//}
//
//// 动态多态满足条件
//// 1、有继承关系
//// 2、子类重写父类方法
//
//// 动态多态使用
//// 父类的指针活着引用 指向子类对象
//
//int main(){
////    Animal animal;
////    Cat cat;
////    DoFunc(animal);
////    DoFunc(cat);
//
//    Animal animal;
//    cout << "sizeof animal = " << sizeof(animal) << endl;
//
//    return 0;
//}
