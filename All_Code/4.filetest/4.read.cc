#include <iostream>
using namespace std;
#include <fstream>
class Person
{
public:
    char m_Name[64];
    int m_Age;
};
void test01()
{
    //创建流对象
    ifstream ifs;
    //打开文件 判断文件是否打开成功
    ifs.open("person.txt",ios::in | ios::binary);

    if(!ifs.is_open())
    {
        cout << "打开文件失败" << endl;
        return ;
    }
    //读文件
    Person p;

    ifs.read((char * )&p,sizeof(Person));

    cout << "姓名: " << p.m_Name << " 年龄: " << p.m_Age << endl;

    //关闭文件
    ifs.close();
}
int main()
{

    test01();
    system("pause");
    return 0;

}