//
//  pointIntegratedApplication.cpp
//  CppCourse
//
//  Created by paramAki on 2021/11/16.
//

#include <iostream>
using namespace std;

// 冒泡排序
void bubbleSort(int * arr, int length){
    for(int i = 0; i < length - 1; i++)
        for(int j = 0; j < length - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
}

// 输出数组
void ConsoleArray(int * p, int length){
    for(int i = 0; i < length; i++){
        cout << *p << " ";
        p++;
    }
    cout << endl;
}

int integratedApplication(){
    int arr[] = {4,6,3,9,2,1,5,8,7};
    int length = sizeof(arr)/sizeof(arr[0]);
    // 数组名就是数组的地址
    bubbleSort(arr, length);
    ConsoleArray(arr, length);
    
    return 1;
}
