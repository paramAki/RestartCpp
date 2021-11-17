////
////  globalArea.cpp
////  CppCore
////
////  Created by paramAki on 2021/11/17.
////
//
//#include <iostream>
//
//using namespace std;
//
//int g_a = 10;
//int g_b = 10;
//const int c_g_a = 10;
//const int c_g_b = 10;
//static int s_g_a = 10;
//static int s_g_b = 10;
//
//int main(){
//    // 内存四区--代码区、全局区、栈区、堆区
//    // 全局区
//    // 存放全局变量、静态变量、常量
//    // 常量区中存放const修饰的全局常量和字符串常量
//    int a = 10;
//    int b = 10;
//
//    const int c_l_a = 10;
//    const int c_l_b = 10;
//
//    static int s_a = 10;
//    static int s_b = 10;
//
//    cout << "局部变量a地址：" << (long)&a << endl;
//    cout << "局部变量b地址：" << (long)&b << endl;
//    cout << "const修饰的局部变量a的地址：" << (long)&c_l_a << endl;
//    cout << "const修饰的局部变量b的地址：" << (long)&c_l_b << endl;
//
//    cout << "const修饰的全局常量a的地址：" << (long)&c_g_a << endl;
//    cout << "const修饰的全局常量b的地址：" << (long)&c_g_b << endl;
//
//    cout << "static修饰的静态局部变量a的地址：" << (long)&s_a << endl;
//    cout << "static修饰的静态局部变量b的地址：" << (long)&s_b << endl;
//    cout << "static修饰的金泰全局变量a的地址：" << (long)&s_g_a << endl;
//    cout << "static修饰的金泰全局变量b的地址：" << (long)&s_g_b << endl;
//
//    cout << "全局变量g_a地址：" << (long)&g_a << endl;
//    cout << "全局变量g_b地址：" << (long)&g_b << endl;
//
//    cout << "字符串常量地址：" << (long)&"hello world" << endl;
//
//    return 0;
//}
