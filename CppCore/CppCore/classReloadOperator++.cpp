//
//  classReloadOperator++.cpp
//  CppCore
//
//  Created by paramAki on 2021/11/22.
//

//#include <iostream>
//using namespace std;
//
//class MyInteger{
//    friend ostream& operator<<(ostream &cout, MyInteger integer);
//public:
//    MyInteger(){
//        m_A = 0;
//    }
//    
//    // 重载前置++运算符
//    MyInteger& operator++(){
//        m_A++;
//        return *this;
//    }
//    
//    // 重载后置++运算符
//    MyInteger operator++(int){
//        // 先记录值
//        MyInteger temp = *this;
//        // 再递增
//        m_A++;
//        // 返回记录结果
//        return temp;
//    }
//      
//private:
//    int m_A;
//};
//
//// 全局函数重载<<
//ostream& operator<<(ostream &cout, MyInteger myInteger){
//    cout << myInteger.m_A;
//    
//    return cout;
//}
//
//int main(){
//    MyInteger myInteger;
//    cout << myInteger << endl;
//    cout << ++myInteger << endl; 
//    cout << myInteger++ << endl;
//    cout << myInteger << endl;
//    
//    return 0;
//}
