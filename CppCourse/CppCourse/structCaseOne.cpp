////
////  structCaseOne.cpp
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
//    int id;
//    string name;
//    int age;
//    float score;
//};
//
//struct Teacher{
//    string name;
//    int age;
//
//    Student stu[3];
//};
//
//void mallocTeacher(Teacher arr[], int len){
//    string nameSeed = "ABCDE";
//    for(int i = 0; i < len; i++){
//        arr[i].name = "Teacher_";
//        arr[i].name += nameSeed[i];
//        arr[i].age = rand() % 30 + 30;
//        int studentLen = sizeof(arr[i].stu) / sizeof(arr[i].stu[0]);
//        for(int j = 0; j < studentLen; j++){
//            arr[i].stu[j].name = "Student_";
//            arr[i].stu[j].name += nameSeed[j];
//            arr[i].stu[j].age = rand() % 5 + 10;
//            arr[i].stu[j].id = j;
//            arr[i].stu[j].score = rand() % 61 + 40;
//        }
//    }
//}
//
//void printInfo(Teacher arr[], int len){
//    for(int i = 0; i < len; i++){
//        cout << "老师：" << arr[i].name << " 年龄：" << arr[i].age << endl;
//        for(int j = 0; j < 3; j++){
//            cout << "\t 学生：" << arr[i].stu[j].name << "  年龄：" << arr[i].stu[j].age << "  得分：" << arr[i].stu[j].score << endl;
//        }
//        cout << endl;
//    }
//}
//
//int main(){
//    // 随机数种子
//    srand((unsigned int)time(NULL));
//    Teacher teacherArr[5];
//    int len = sizeof(teacherArr) / sizeof(teacherArr[0]);
//
//    mallocTeacher(teacherArr, len);
//
//    printInfo(teacherArr, len);
//
//    return 1;
//}
