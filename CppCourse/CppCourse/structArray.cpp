////
////  structArray.cpp
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
//struct Student{
//    string name;
//    int age;
//    float score;
//};
//
//struct Teacher{
//    int id;
//    string name;
//    int age;
//
//    Student stu;
//};
//
//void print(const Student * s){
////    s->name = 1;
//    cout << "姓名：" << s->name << "  平均分：" << s->score << "  \t年龄： " << s->age << endl;
//}
//
//int structArray(){
//    Student arr[] = {
//        {"张三", 18, 95.5},
//        {"李四", 18, 98.2},
//        {"王五", 18 ,76}
//    };
//
//
//    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
//        cout << "姓名：" << arr[i].name << "  平均分：" << arr[i].score << "  \t年龄： " << arr[i].age << endl;
//    }
//
//    Student * p = &arr[2];
//
//    cout << "王五: " << p->name << endl;
//
//    Student s = {"狗蛋", 18, 55};
//    Teacher teacher = {1100, " ", 43, {"狗蛋", 18, 55}};
//
//    print(&s);
//
//    return 1;
//}
