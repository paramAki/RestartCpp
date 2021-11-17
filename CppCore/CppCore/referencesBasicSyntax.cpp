//
//  referencesBasicSyntax.cpp
//  CppCore
//
//  Created by paramAki on 2021/11/17.
//

#include <iostream>

using namespace std;

// 引用的作用：给变量起别名
// 语法：数据类型 &别名 = 原名

int main(){
    int a = 10;
    int &b = a;// b引用a
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    b = 20;
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    return 0;
}
