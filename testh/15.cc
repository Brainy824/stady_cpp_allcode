#include <iostream>
#include <string>
using namespace std;

//成员变量 和 成员函数是分开存储的
class Person
{
    int m_A;
    static int m_B;
    void func()
    {
        
    }
};
int Person::m_B = 0;
void test01()
{
    Person p;

    cout << "size of p = " << sizeof(p) << endl;
}
void test02()
{
    Person p;
    cout << "size of p = " << sizeof(p) << endl;
}
int main()
{
    //test01();
    test02();

    system("pause");
    return 0;
}