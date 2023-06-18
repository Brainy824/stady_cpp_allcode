//操作文件三大类
//ofstream:写操作
//ifstream:读操作
//fstream:读写操作

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void test01()
{
    //2、创建流对象

    ofstream ofs;

    //指定打开方式
    ofs.open("test.txt",ios::out);

    //写内容
    ofs << "姓名: 张三" << endl;
    ofs << "性别: 男" << endl;
    ofs << "年龄: 18" << endl;

    //关闭文件
    ofs.close();

}
int main()
{
    test01();

    system("pause");
    return 0;
    
}