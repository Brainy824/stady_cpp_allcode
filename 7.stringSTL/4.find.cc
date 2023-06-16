
//string的查找和替换
//find查找是从左往右，rfind是从右往左
//find找到字符串后返回查找的第一个字符位置，找不到返回-1
//replace在替换是，要指定从那个位置起，多少个字符，替换成什么样的字符串


#include <iostream>
using namespace std;
#include <string>
//1、查找
void test01()
{
    string str1 = "abcdefg";

    int pos = str1.find("df");

    if(pos == -1)
    {
        cout << "未找到字符串" << endl;
    }
    else
    {
        cout << "找到字符串,pos = " << pos << endl;//没有查到字串返回-1
    }


    pos = str1.rfind("de");
    cout << "pos = " << pos << endl;


}
void test02()
{
    string str1 = "abcdefg";

    //从一号位置起 3个字符 替换为”1111“
    str1.replace(1,3,"1111");
    cout << str1 << endl;
}

int main()
{
    
    test02();
    system("pause");
    return 0; 
}