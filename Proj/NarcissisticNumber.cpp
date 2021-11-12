//
// Created by paramAki on 2021/11/13.
//

#include <iostream>

using namespace std;

int main() {
    int index = 100;
    do {
        int i = (index - index % 100) / 100;//百位数
        int j = (index - i * 100) / 10;
        int m = index - 100 * i - 10 * j;

        if (i * i * i + j * j * j + m * m * m == index) {
            cout << index << endl;
        }
        index++;
    } while (index < 1000);
    return 1;
}