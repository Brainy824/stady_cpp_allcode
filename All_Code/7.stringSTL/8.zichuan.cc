
//从字符串中获取想要的字串

#include <iostream>
using namespace std;
#include <string>
void test01()
{
    string str = "abcdef";

    //截取需要的字符串
    string subStr = str.substr(1,3);

    cout << "subStr = " << subStr << endl;
}

//实用操作
void test02()
{
    string email = "zhangsan@sina.com";

    //从邮件地址中 获取 用户信息
    int pos = email.find("@");
    cout << pos << endl;

    //截取用户
    string usrName = email.substr(0,8);
    cout << "usrName = " << usrName << endl;



}
int main()
{
    
    test02();
    system("pause");
    return 0; 
}