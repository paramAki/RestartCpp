//
//  operatorNew.cpp
//  CppCore
//
//  Created by paramAki on 2021/11/17.
//

//#include <iostream>
//
//using namespace std;
//
//int* func(){
//    int * p = new int(10);
//    return p;
//}
//// 1、new的基本语法
//void test01(){
//    int * p = func();
//    cout << *p << endl;
//    // 堆区的数据由程序员管理开辟和释放，delete释放
//    delete p;
//    cout << *p << endl;
//    cout << *p << endl;
//}
//
//// 2、在堆区开辟数组
//void test02(){
//    int *arr = new int[10];
//
//    for(int i = 0; i < 10; i++){
//        arr[i] = 100 + i;
//    }
//
//    for(int i = 0; i < 10; i++){
//        cout << "arr[" << i << "] = " << arr[i] << endl;
//    }
//
//    delete [] arr;
//}
//
//int main(){
////    test01();
//    test02();
//
//    return 0;
//}
