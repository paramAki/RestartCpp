////
////  structCaseII.cpp
////  CppCourse
////
////  Created by paramAki on 2021/11/16.
////
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct Hero{
//    string name;
//    int age;
//    string sex;
//};
//
//void sortByAge(Hero hero[], int len){
//    for(int i = 0; i < len - 1; i++){
//        for(int j = 0; j < len - i -1; j++){
//            if(hero[j].age > hero[j + 1].age){
//                Hero h = hero[j];
//                hero[j] = hero[j + 1];
//                hero[j + 1] = h;
//            }
//        }
//    }
//}
//
//void printInfo(Hero hero[], int len){
//    for(int i = 0; i < len; i++){
//        cout << "姓名：" << hero[i].name << "  年龄：" << hero[i].age << "  性别：" << hero[i].sex << endl;
//    }
//}
//
//int main(){
//    Hero hero[] = {
//        {"刘备", 23 , "男"},
//        {"关羽", 22 , "男"},
//        {"张飞", 20 , "男"},
//        {"赵云", 21 , "男"},
//        {"貂蝉", 19 , "女"}
//    };
//    int length = sizeof(hero) / sizeof(hero[0]);
//    
//    cout << "排序前：" << endl;
//    printInfo(hero, length);
//    
//    sortByAge(hero, length);
//    
//    cout << "排序后的结果：" << endl;
//    printInfo(hero, length);
//    
//    return 1;
//}
