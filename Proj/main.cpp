#include <iostream>
#include <unistd.h> //调用pause()需要的头文件
#include <string>

#define Day 7; // 宏常量

using namespace std;

int main() {
    int i;
    int count = 0;
    const auto m = 0;// const修饰的常量
    char a = 'a';// 字符类型
    char str[] = "hello world";//c语言字符串
    string str1 = "hello world";//c++
    for (i = 0; i < 5; i++) {
        count += i;
    }

    cout << "Hello, World!" << endl << str << endl;

    cout << "Day: " << Day;
    cout << endl;
//    pause();

    //整型
    int a1 = 0;
    cout << "请输入a的值：" << endl;
    cin >> a1;
    cout << "a的值为：" << a1 << endl << endl;

    return 0;
}

