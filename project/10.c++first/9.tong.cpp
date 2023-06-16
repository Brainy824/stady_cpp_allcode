#include <iostream>
#include <string>
#define Max 100
using namespace std;
struct Person
{
    string m_Name;
    int m_Sex;
    int m_Age;
    string m_Phone;
    string m_Addr;
};
struct Addressbooks
{
    //通讯录中保存的联系人数组
    struct Person personArray[Max];

    //通讯录中当前记录的联系人的个数
    int m_Size;
    
};
//检测联系人是否存在，如果存在，返回联系人所在数组中的具体位置，不存在返回-1
int isExist(Addressbooks * abs,string name)
{
    for(int i = 0; i < abs->m_Size; i++)
    {
        if(abs->personArray[i].m_Name == name)
        {
            return i;
        }
    }
    return -1;
}
//显示所有联系人
void showPerson(Addressbooks * abs)
{
    if(abs->m_Size == 0)
    {
        cout << "当前的记录为空" << endl;

    }
    else{
        for(int i = 0; i < abs->m_Size; i++ )
        {
            cout << "姓名: " << abs->personArray[i].m_Name << endl;
            cout << "性别: " << (abs->personArray[i].m_Sex == 1?"男":"女") << endl;
            cout << "年龄: " << abs->personArray[i].m_Age << endl;
            cout << "电话: " << abs->personArray[i].m_Phone << endl;
            cout << "住址: " << abs->personArray[i].m_Addr << endl;
        }
    }
}

//修改指定联系人信息
void modifyPerson(Addressbooks * abs)
{
    cout << "请输入你要修改的联系人" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs,name);

    if(ret != -1)
    {
        string name;
        cout << "请输入姓名: " << endl;
        cin >> name;
        abs->personArray[ret].m_Name = name;

        cout << "请输入性别: " << endl;
        cout << "1 ---- 男" << endl;
        cout << "2 ---- 女" << endl;
        int sex = 0;
        while(true)
        {
            cin >> sex;
            if(sex == 1|| sex == 2)
            {
                abs->personArray[ret].m_Sex = sex;
                break;
            }  
            cout << "输入有误,请重新输入" << endl;          
        }

        cout << "请输入年龄: " << endl;
        int age = 0;
        cin >> age;
        abs->personArray[ret].m_Age = age;

        cout << "请输入联系人电话: " << endl;
        string phone;
        cin >> phone;
        abs->personArray[ret].m_Phone = phone;

        cout << "请输入家庭住址" << endl;
        string address;
        cin >> address;
        abs->personArray[ret].m_Addr = address;

        cout << "修改成功" << endl;
    }
    else 
    {
        cout << "查无此人" << endl;
    }
}



//删除指定联系人
void deletePerson(Addressbooks * abs)
{
    cout << "请输入你要删除的联系人" << endl;
    string name;
    cin >> name;

    int ret = isExist(abs,name);

    if(ret != -1)
    {
        //找到此人
        for(int i = ret; i < abs->m_Size; i++)
        {
            abs->personArray[i] = abs->personArray[i+1];

        }
        abs->m_Size--;
        cout << "删除成功" << endl;
    }
    
}
//查找指定联系人信息
void findPerson(Addressbooks*abs)
{
    cout << "请输入你要查找的联系人" << endl;
    string name;
    cin >> name;

    //判断指定的联系人是否存在
    int ret = isExist(abs,name);

    if(ret != -1)
    {
        cout << "姓名: " << abs->personArray[ret].m_Name << endl;
        cout << "性别: " << abs->personArray[ret].m_Sex << endl;
        cout << "年龄: " << abs->personArray[ret].m_Age << endl;
        cout << "电话: " << abs->personArray[ret].m_Phone << endl;
        cout << "住址: " << abs->personArray[ret].m_Addr << endl;


    }
    else
    {
        cout << "查无此人" << endl;
    }
}
void showMenu()
{
    cout << "***********************" << endl;
    cout << "**** 1、添加联系人 ****" << endl;
    cout << "**** 2、显示联系人 ****" << endl;
    cout << "**** 3、删除联系人 ****" << endl;
    cout << "**** 4、查找联系人 ****" << endl;
    cout << "**** 5、修改联系人 ****" << endl;
    cout << "**** 6、清空联系人 ****" << endl;
    cout << "**** 0、退出通讯录 ****" << endl;
    cout << "***********************" << endl; 
}
//第一个功能
void addPerson(Addressbooks *abs)
{
    //判断一下通讯录是否已经满了，满了不添加
    if(abs->m_Size == Max)
    {
        cout << "通讯录已经满了,无法添加！" << endl;
        return;
    }
    else
    {
        //添加姓名
        string name;
        cout << "请输入姓名; " << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;

        //性别
        cout << "请输入性别: " << endl;
        cout << "1 --- 男 " << endl;
        cout << "2 --- 女 " << endl;
        int sex = 0;
        while(true)
        {
            cin >> sex;
            if(sex == 1 || sex == 2)
            {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            } 
            cout << "输入有误,请重新输入！" << endl;       
        }

        //年龄
        cout << "请输入年龄: " << endl;
        int age = 0;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;

        //电话
        cout << "请输入联系电话: " << endl;
        string phone;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;

        //住址
        cout << "请输入家庭住址: " << endl;
        string address;
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr = address;

        //更新通讯录人数
        abs->m_Size++;

        cout << "添加成功！" << endl;

    }
}
//清空联系人
void cleanPerson(Addressbooks *abs)
{
    abs->m_Size = 0;//将当前记录联系人数量置为零
    cout << "通讯录已经清空"<< endl;

}
int main()
{
    //创建通讯录结构体的变量
    Addressbooks abs;
    //初始化通讯录中当前人员个数
    abs.m_Size = 0;

    //创建一个用户选择输入的变量
    int select = 0;

    while(true)
    {
  
        //菜单的调用
        showMenu();

        cin >> select;
        switch (select)
        {
        case 1://1、添加联系人 
            addPerson(&abs);
            break;
        case 2://2、显示联系人 
            showPerson(&abs);
            break;
        case 3://3、删除联系人
            // {
            //     cout << "请输入删除联系人姓名: " << endl;
            //     string name;
            //     cin >> name;

            //     if(isExist(&abs,name) == -1)
            //     {
            //         cout << "查无此人" << endl;

            //     }
            //     else
            //     {
            //         cout << "找到此人" << endl;
            //     }
            // }
            deletePerson(&abs);
            break;
        case 4://4、查找联系人
            findPerson(&abs);
            break;
        case 5://5、修改联系人 
            modifyPerson(&abs);
            break;
        case 6://6、清空联系人
            cleanPerson(&abs);
            break;
        case 0://0、退出通讯录
            cout << "欢迎下次使用" << endl;
            
            break;    
        default:
            break;
        }

    }


    system("pause");
    system("cls");
    return 0;
}