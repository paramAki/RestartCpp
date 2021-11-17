//
//  main.cpp
//  AddressListManagerSystem
//
//  Created by paramAki on 2021/11/16.
//

#include <iostream>
#include <string>
#define MAX 1000

using namespace std;

// 联系人结构体
struct Person{
    string name;
    int sex;// 性别： 1是男，2是女
    int age;
    string phone;
    string arrdress;
};

// 通讯录结构体
struct AddressList{
    Person personArr[MAX];
    int len;
};

// 菜单
void showMenu(){
    cout << "***********************" << endl;
    cout << "***** 1、增加联系人 *****" << endl;
    cout << "***** 2、显示联系人 *****" << endl;
    cout << "***** 3、删除联系人 *****" << endl;
    cout << "***** 4、查找联系人 *****" << endl;
    cout << "***** 5、修改联系人 *****" << endl;
    cout << "***** 6、清空联系人 *****" << endl;
    cout << "***** 0、退出通讯录 *****" << endl;
    cout << "***********************" << endl;
}

int main() {
    int select = 0;
    
    while(true){
        
        showMenu();
        
        cin >> select;
        
        switch(select){
            case 1:// 1、增加联系人
                break;
            case 2:// 2、显示联系人
                break;
            case 3:// 3、删除联系人
                break;
            case 4:// 4、查找联系人
                break;
            case 5:// 5、修改联系人
                break;
            case 6:// 6、清空联系人
                break;
            case 0:// 0、退出通讯录
                cout << "welcome to use address list manager system next time" << endl;
                cout << "press any key to continue......" << endl;
                getchar();
                return 0;
                break;
            default:
                break;
        }
        system("clear");
        
    }
    return 0;
}
