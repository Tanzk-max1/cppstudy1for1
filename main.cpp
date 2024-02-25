#include <iostream>
#include <string>
using namespace std;
#define MAX 1000//最大人数

void showMenu(){
    cout << "******************************" << endl;
    cout << "*****  1、添加联系人  *****" << endl;
    cout << "*****  2、显示联系人  *****" << endl;
    cout << "*****  3、删除联系人  *****" << endl;
    cout << "*****  4、查找联系人  *****" << endl;
    cout << "*****  5、修改联系人  *****" << endl;
    cout << "*****  6、清空联系人  *****" << endl;
    cout << "*****  0、退出通讯录  *****" << endl;
    cout << "***************************" << endl;
}

struct Person{
    string m_Name; //姓名
    int m_Sex; //性别：1男 2女
    int m_Age; //年龄
    string m_Phone; //电话
    string m_Addr; //住址
};

struct Addressbooks{
    struct Person personArray[MAX];
    int m_Size;//通讯录中人员人数
};

void addPerson(Addressbooks *abs)
{
    if(abs->m_Size == MAX){
        cout << "通讯录已满" << endl;
        return;

    } else{
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        abs -> personArray[abs->m_Size].m_Name = name;

        cout << "请输入性别：" << endl;
        cout << "1 -- 男" << endl;
        cout << "2 -- 女" << endl;

        int sex = 0;
        while (true){
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            cout << "输入有错误" ;

        }

        //年龄
        cout << "请输入年龄：" << endl;
        int age = 0;cin >> age ;
        abs -> personArray[abs->m_Size].m_Age = age;

        //联系电话
        cout << "请输入联系电话：" << endl;
        string phone = "";
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;

        //家庭住址
        cout << "请输入家庭住址：" << endl;
        string address;
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr = address;

        abs -> m_Size++;

        cout << "添加成功" <<endl;

    }
}

int main() {
    int select = 0;
    while(true){
        showMenu();
        Addressbooks abs;
        abs.m_Size = 0;//初始化通讯录中人数



        cin >> select;

        switch (select) {
            case 1:
                addPerson(&abs);
                break;
            case 2:
                break;
            case 3:
                cout << "hhhh" <<endl;
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 0:
                cout << "欢迎下次使用" << endl;
                return 0;
                break;
        }
    }




    return 0;
}

