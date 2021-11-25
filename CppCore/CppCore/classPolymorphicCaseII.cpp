//
//  classPolymorphicCaseII.cpp
//  CppCore
//
//  Created by paramAki on 2021/11/25.
//

//#include <iostream>
//using namespace std;
//
//// 多态案例II
//class AbstractDrinking{
//public:
//    // 烧水
//    virtual void boil() = 0;
//    // 冲泡
//    virtual void brew() = 0;
//    // 倒入杯子
//    virtual void pourInCup() = 0;
//    // 加料
//    virtual void putSomething() = 0;
//    
//    void makeDrinking(){
//        boil();
//        brew();
//        pourInCup();
//        putSomething();
//    }
//};
//
//class MakeCoffee : public AbstractDrinking{
//    // 烧水
//    virtual void boil(){
//        cout << "烧水..." << endl;
//    };
//    // 冲泡
//    virtual void brew(){
//        cout << "冲泡..." << endl;
//    };
//    // 倒入杯子
//    virtual void pourInCup(){
//        cout << "倒入杯子..." << endl;
//    };
//    // 加料
//    virtual void putSomething(){
//        cout << "加糖..." << endl;
//    };
//};
//
//class MakeTea : public AbstractDrinking{
//    // 烧水
//    virtual void boil(){
//        cout << "烧水..." << endl;
//    };
//    // 冲泡
//    virtual void brew(){
//        cout << "放入茶叶..." << endl;
//    };
//    // 倒入杯子
//    virtual void pourInCup(){
//        cout << "倒入热水..." << endl;
//    };
//    // 加料
//    virtual void putSomething(){
//        cout << "加入枸杞..." << endl;
//    };
//};
//
//void doWork(AbstractDrinking * abs){
//    abs->makeDrinking();
////    delete abs;
//}
//
//int main(){
//    AbstractDrinking * abs = new MakeCoffee;
//    abs->makeDrinking();
//    cout << endl;
////    delete abs;
//    
//    abs = new MakeTea;
//    abs->makeDrinking();
////    delete abs;
//    
//    return 0;
//}
