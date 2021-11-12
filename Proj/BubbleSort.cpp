//
// Created by paramAki on 2021/11/14.
//

#include <iostream>

using namespace std;

int main() {
    int arr[] = {9, 8, 7, 6, 3, 5, 4, 1, 2};

    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 8 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int m = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = m;
            }
        }

    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }
    return 1;
}