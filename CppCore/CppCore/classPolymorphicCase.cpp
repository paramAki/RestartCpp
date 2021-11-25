//
//  classPolymorphicCase.cpp
//  CppCore
//
//  Created by paramAki on 2021/11/25.
//
//
//#include <iostream>
//using namespace std;
//
//class AbstractCalculator{
//public:
//    virtual int getResult(){
//        
//        return 0;
//    }
//    int m_A;
//    int m_B;
//};
//
//class AddCalculator : public AbstractCalculator{
//    int getResult(){
//        return m_A + m_B;
//    }
//};
//
//class SubCalculator : public AbstractCalculator{
//    int getResult(){
//        return m_A - m_B;
//    }
//};
//
//class MulCalculator : public AbstractCalculator{
//    int getResult(){
//        return m_A * m_B;
//    }
//};
//
//class DivCalculator : public AbstractCalculator{
//    int getResult(){
//        return m_A / m_B;
//    }
//};
//
//int main(){
//    // 动态多态使用
//    // 父类的指针活着引用 指向子类对象
//    AbstractCalculator * abc = new AddCalculator;
//    abc->m_A = 10;
//    abc->m_B = 10;
//    cout << abc->m_A << " + " << abc->m_B << " = " << abc->getResult() << endl;
//    delete abc;
//    
//    abc = new SubCalculator;
//    abc->m_A = 10;
//    abc->m_B = 10;
//    cout << abc->m_A << " - " << abc->m_B << " = " << abc->getResult() << endl;
//    delete abc;
//    
//    abc = new MulCalculator;
//    abc->m_A = 10;
//    abc->m_B = 10;
//    cout << abc->m_A << " * " << abc->m_B << " = " << abc->getResult() << endl;
//    delete abc;
//    
//    abc = new DivCalculator;
//    abc->m_A = 10;
//    abc->m_B = 10;
//    cout << abc->m_A << " / " << abc->m_B << " = " << abc->getResult() << endl;
//    delete abc;
//    
//    return 0;
//}
