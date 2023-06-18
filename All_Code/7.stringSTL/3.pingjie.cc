//string字符串拼接


#include <iostream>
using namespace std;
#include <string>
//string字符串拼接
void test01()
{
    string str1 = "我";

    str1 += "爱玩游戏";

    cout << "str1 = " << str1 << endl;

    str1 += ':';

    cout << "str1 = " << str1 << endl;

    string str2 = "LOL DNF";

    str1 += str2;
    cout << "str1 = " << str1 << endl;

    string str3 = "I";
    str3.append(" love ");//追加
    cout << "str3 = " << str3 << endl;

    str3.append("game abcde ",5);//只要前四个
    cout << "str3 = " << str3 << endl;

    str3.append(str2,0,3);//只截取到LOL个
    cout << "str3 = " << str3 << endl;
//其实位置到终止位置 参数2：从那个位置开始截取， 参数3 截取的结束位置
    str3.append(str2,4,7);//只截取到DNF个
    cout << "str3 = " << str3 << endl;




}

int main()
{
    
    test01();
    system("pause");
    return 0; 
}