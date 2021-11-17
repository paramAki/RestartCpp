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
    string m_Name;
    int m_Sex;// 性别： 1是男，2是女
    int m_Age;
    string m_Phone;
    string m_Address;
};

// 通讯录结构体
struct AddressList{
    Person personArr[MAX];
    int m_Size;
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

// 添加联系人
void addPerson(AddressList * als){
    if(als->m_Size >= MAX){
        cout << "通讯录已满,无法添加联系人！" << endl;
        return ;
    }else{
        // 姓名
        string name;
        cout << "请输入姓名：";
        cin >> name;
        als->personArr[als->m_Size].m_Name = name;
        
        // 性别
        int sex;
        cout << "请输入性别：" << endl;
        cout << "1 --- 男" << endl;
        cout << "2 --- 女" << endl;
        do{
            cin >> sex;
            if(sex != 1 && sex != 2){
                cout << "输入不合法，请重新输入：";
            }
        }while(sex != 1 && sex != 2);
        als->personArr[als->m_Size].m_Sex = sex;
        
        // 年龄
        int age;
        cout << "请输入年龄：" ;
        cin >> age;
        als->personArr[als->m_Size].m_Age = age;
        
        // 电话号码
        string phone;
        cout << "请输入电话号码：";
        
        do{
            cin >> phone;
            if(phone.size() != 10)
                cout << "号码不合法，请重新输入：";
        }while(phone.size() != 11);
        als->personArr[als->m_Size].m_Phone = phone;
        
        // 住址
        string address;
        cout << "请输入地址：";
        cin >> address;
        als->personArr[als->m_Size].m_Address = address;
        
        // 添加成功
        als->m_Size++;
        cout << "添加成功" << endl;
    }
}

// 显示联系人
void showAddressList(AddressList * als){
    
}

int main() {
    int select = 0;
    AddressList als;
    als.m_Size = 0;
    
    while(true){
        
        showMenu();
        
        cin >> select;
        
        switch(select){
            case 1:// 1、增加联系人
                addPerson(&als);
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
