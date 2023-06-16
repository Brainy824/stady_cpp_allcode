#include <iostream>
#include <string>
using namespace std;
//同名成员处理
class Base
{
public:
    Base()
    {
        m_A = 100;

    }
    void func()
    {
        cout << "Base - func()调用 " << endl;
    }
    void func(int a)
    {
        cout << "Base - func(int a)调用 " << endl;
    }
    int m_A;
};
class Son:public Base
{
public:
    Son()
    {
        m_A = 200;
    }
    void func()
    {
        cout << "Son - func()调用 " << endl;
    }
    int m_A;
};
void test01()
{
    Son s;
    cout << "Son  下的m_A = " << s.m_A << endl;
    cout << "Base 下的m_A = " << s.Base::m_A << endl;
}
//同名函数属性 的处理
void test02()
{
    Son s;
    s.Base::func();
    s.Base::func(100);
}
int main()
{

    test02();
    system("pause");
    return 0;
}