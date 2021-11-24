//
//  classReloadOperator--.cpp
//  CppCore
//
//  Created by paramAki on 2021/11/24.
//

//#include <iostream>
//using namespace std;
//
//class MyInteger{
//    friend ostream& operator<<(ostream &cout, MyInteger myInteger);
//public:
//    MyInteger(){
//        m_A = 0;
//    }
//
//    //  前置--
//    MyInteger& operator--(){
//        m_A--;
//        return *this;
//    }
//
//    // 后置--
//    MyInteger operator--(int){
//        MyInteger temp = *this;
//        m_A--;
//        return temp;
//    }
//
//private:
//    int m_A;
//};
//
//ostream& operator<<(ostream &cout, MyInteger myInteger){
//    cout << myInteger.m_A;
//    return cout;
//}
//
//int main(){
//    MyInteger myInteger;
//    cout << myInteger << endl;
//    
//    cout << --myInteger << endl;
//    cout << myInteger << endl;
//
//    
//    cout << myInteger-- << endl;
//    cout << myInteger << endl;
//
//    return 0;
//}
