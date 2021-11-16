//
//  structBase.cpp
//  CppCourse
//
//  Created by paramAki on 2021/11/16.
//

#include <iostream>
#include <string>

using namespace std;

struct Student{
    string name;
    
    int age;
    
    float score;
};

int structBase(){
    Student s1;
    s1.name = "张三";
    s1.age = 18;
    s1.score = 75.5;
    
    Student s2 = {"李四" , 12, 100};
    
    
    cout << "张三: " << s1.name << endl;
    cout << "李四: " << s2.name << endl;

    return 1;
}
