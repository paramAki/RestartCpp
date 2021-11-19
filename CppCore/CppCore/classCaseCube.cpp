//
//  classCaseCube.cpp
//  CppCore
//
//  Created by paramAki on 2021/11/19.
//

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Cube{
//private:
//    int m_H;
//    int m_W;
//    int m_L;
//    
//    int m_S;
//    int m_V;
//public:
//    void setH(int h){
//        m_H = h;
//    }
//    void setW(int w){
//        m_W = w;
//    }
//    void setL(int l){
//        m_L = l;
//    }
//    int getH(){
//        return m_H;
//    }
//    int getW(){
//        return m_W;
//    }
//    int getL(){
//        return m_L;
//    }
//    int getS(){
//        return 2 * (m_H * m_L + m_L * m_W + m_H * m_W);
//    }
//    int getV(){
//        return m_H * m_L * m_W;
//    }
//};
//
//void isSame(Cube &c1, Cube &c2);
//
//int main(){
//    Cube c1;
//    Cube c2;
//    
//    c1.setH(10);
//    c1.setW(20);
//    c1.setL(30);
//    
//    c2.setH(10);
//    c2.setW(20);
//    c2.setL(20);
//    
//    c1.getS();
//    c1.getV();
//    
//    isSame(c1, c2);
//    
//    return 0;
//}
//
//void isSame(Cube &c1, Cube &c2){
//    if(c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW()){
//        cout << "c1 和 c2相等" << endl;
//    }else{
//        cout << "c1 和 c2不相等" << endl;
//    }
//}
