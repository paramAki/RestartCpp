//
//  pointAndArray.cpp
//  CppCourse
//
//  Created by paramAki on 2021/11/16.
//

#include <iostream>
using namespace std;

int main1(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int * p = arr;
    
    for(int i = 0; i < 9; i++){
        cout << *p << endl;
        p++;
    }
    cout << *p << endl;
    
    return 1;
}
