//
//  pointAndFunction.cpp
//  CppCourse
//
//  Created by paramAki on 2021/11/16.
//

#include <iostream>
using namespace std;

// 地址传递
void swapAB(int * m, int * n){
    int temp = *m;
    *m = *n;
    *n = temp;
}

int pointSwap(){
    int a = 1, b = 2;
    swapAB(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    return 1;
}
