//
// Created by paramAki on 2021/11/13.
//

#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " * " << i << " = " << i * j << "  ";
            if (i * j < 10) cout << " ";
        }
        cout << endl;
    }

    return 1;
}