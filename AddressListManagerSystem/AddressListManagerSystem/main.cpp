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

// 函数声明
void showPerson(Person person);
void showMenu();
void addPerson(AddressList * als);
void showAddressList(AddressList * als);
int isExist(AddressList * als, string name);
void searcherPerson(AddressList * als);
void deletePerson(AddressList * als);
void editPerson(AddressList * als, int index);
void modifyPerson(AddressList * als);
void emptyAddressList(AddressList * als);

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
                showAddressList(&als);
                break;
            case 3:// 3、删除联系人
                deletePerson(&als);
                break;
            case 4:// 4、查找联系人
                searcherPerson(&als);
                break;
            case 5:// 5、修改联系人
                modifyPerson(&als);
                break;
            case 6:// 6、清空联系人
                emptyAddressList(&als);
                break;
            case 0:// 0、退出通讯录
                cout << "welcome to use address list manager system next time" << endl;
//                cout << "press any key to continue......" << endl;
//                getchar();
                return 0;
                break;
            default:
                cout << "非法输入，请重新输入!" << endl;
                break;
        }
        system("clear");
        
    }
    return 0;
}

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

// 编辑联系人
void editPerson(AddressList * als, int index){
    // 姓名
    string name;
    cout << "请输入姓名：";
    cin >> name;
    als->personArr[index].m_Name = name;
    
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
    als->personArr[index].m_Sex = sex;
    
    // 年龄
    int age;
    cout << "请输入年龄：" ;
    cin >> age;
    als->personArr[index].m_Age = age;
    
    // 电话号码
    string phone;
    cout << "请输入电话号码：";
    
    do{
        cin >> phone;
        if(phone.size() != 11)
            cout << "号码不合法，请重新输入：";
    }while(phone.size() != 11);
    als->personArr[index].m_Phone = phone;
    
    // 住址
    string address;
    cout << "请输入地址：";
    cin >> address;
    als->personArr[index].m_Address = address;
}

// 添加联系人
void addPerson(AddressList * als){
    if(als->m_Size >= MAX){
        cout << "通讯录已满,无法添加联系人！" << endl;
        return ;
    }else{
//        // 姓名
//        string name;
//        cout << "请输入姓名：";
//        cin >> name;
//        als->personArr[als->m_Size].m_Name = name;
//
//        // 性别
//        int sex;
//        cout << "请输入性别：" << endl;
//        cout << "1 --- 男" << endl;
//        cout << "2 --- 女" << endl;
//        do{
//            cin >> sex;
//            if(sex != 1 && sex != 2){
//                cout << "输入不合法，请重新输入：";
//            }
//        }while(sex != 1 && sex != 2);
//        als->personArr[als->m_Size].m_Sex = sex;
//
//        // 年龄
//        int age;
//        cout << "请输入年龄：" ;
//        cin >> age;
//        als->personArr[als->m_Size].m_Age = age;
//
//        // 电话号码
//        string phone;
//        cout << "请输入电话号码：";
//
//        do{
//            cin >> phone;
//            if(phone.size() != 11)
//                cout << "号码不合法，请重新输入：";
//        }while(phone.size() != 11);
//        als->personArr[als->m_Size].m_Phone = phone;
//
//        // 住址
//        string address;
//        cout << "请输入地址：";
//        cin >> address;
//        als->personArr[als->m_Size].m_Address = address;
        
        // 添加成功
        editPerson(als, als->m_Size);
        als->m_Size++;
        cout << "添加成功" << endl;
    }
}

// 显示通讯录
void showAddressList(AddressList * als){
    if(als->m_Size < 1){
        cout << "当前记录为空" << endl;
    }
    for(int i = 0; i < als->m_Size; i++){
//        cout << "姓名：" << als->personArr[i].m_Name
//        << "\t性别：" << (als->personArr[i].m_Sex == 1 ? "男" : "女") << endl
//        << "\t年龄：" << als->personArr[i].m_Age << endl
//        << "\t电话号码：" << als->personArr[i].m_Phone << endl
//        << "\t住址：" << als->personArr[i].m_Address << endl << endl;
        showPerson(als->personArr[i]);
    }
}

// 显示联系人
void showPerson(Person person){
    cout << "姓名：" << person.m_Name
    << "\t性别：" << (person.m_Sex == 1 ? "男" : "女") << endl
    << "\t年龄：" << person.m_Age << endl
    << "\t电话号码：" << person.m_Phone << endl
    << "\t住址：" << person.m_Address << endl << endl;
}

// 搜索联系人，存在返回下标，不存在返回-1
int isExist(AddressList * als, string name){
    for(int i = 0; i < als->m_Size; i++){
        if(als->personArr[i].m_Name == name){
            return i;
        }
    }
    return -1;
}

void searcherPerson(AddressList * als){
    string name;
    cout << "请输入要查找的联系人姓名：";
    cin >> name;
    int index = isExist(als, name);
    if(index != -1){
        showPerson(als->personArr[index]);
    }else{
        cout << "联系人不存在" << endl;
        return;
    }
}

void deletePerson(AddressList * als){
    string name;
    cout << "请输入要删除的联系人：";
    cin >> name;
    int index = isExist(als, name);
    if(index == -1){
        cout << "联系人不存在！";
        return;
    }else{
        for(int i = index; i < als->m_Size; i++){
            als->personArr[i] = als->personArr[i + 1];
        }
        als->m_Size--;
        cout << "删除成功";
    }
}

void modifyPerson(AddressList * als){
    string name;
    cout << "请输入要修改的联系人：";
    cin >> name;
    int index = isExist(als, name);
    if(index == -1){
        cout << "联系人不存在！" << endl;
    }else{
        editPerson(als, index);
    }
}

void emptyAddressList(AddressList * als){
    als->m_Size = 0;
    cout << "通讯录已清空" << endl;
}
