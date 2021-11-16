//
//  main.cpp
//  CppCourse
//
//  Created by paramAki on 2021/11/15.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a = 0;
    int * p = &a;
    p = &a;
    cout << "a = " << a << endl;
    cout << "a的地址 = " << &a << endl;
    cout << "p = " << p << endl;
    
    // *解引用可以拿到内存的值
    *p = 1;
    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;
    
    // 32位操作系统下，指针占四个字节内存，64位操作系统下占八个字节
    cout << "sizeof (int *) = " << sizeof(int *) << endl;
    
    // 空指针：指向内存中编号为0的指针
    // 1、空指针用于指针的初始化
    // 2、 空指针是不可以访问的
    
    int * b = NULL;// 空指针
//    *b = 1;
    
    // 野指针：指向非法空间的指针
    int * c = (int *)0x1100;
//    cout << *c << endl;
    
    // 空指针和野指针都不是我们申请的空间，所以不要访问
     
    // const修饰指针三种情况
    const int * d = &a; // 1、const修饰指针 常量指针 不可以修改指针指向的值
//    *d = 10;
    int * const e = &a; // 2、const修饰常量 指针常量 不可以修改指针的指向
//    e = &b;
    const int * const f = &a;// 3、const修饰指针和常量 都不可以修改
    
    return 1;
}
