#include <iostream>
#include <string>
using namespace std;
class Base
{
public:
//静态成员类内声明，类外初始化
    static int m_A;

    static void func()
    {
        cout << "Base - static void func()" << endl;
    }
    static void func(int a)
    {
        cout << "Base - static void func(int a)" << endl;
    }
};
int Base::m_A = 100;

class Son:public Base
{
public:
    static int m_A;
    static void func()
    {
        cout << "Son - static void func()" << endl;
    }
};
int Son::m_A = 200;
void test01()
{
    cout << "通过对象访问" << endl;
    Son s;
    cout << "Son  下的m_A = " << s.m_A << endl;
    cout << "Base 下的m_A = " << s.Base::m_A << endl;

    cout << "通过类名访问: " << endl;
    cout << "Son下的m_A = " << Son::m_A << endl;
    //第一个::代表通过类名方式访问 
    //第二个::代表访问父类作用域下
    cout << "Base下的m_A = " << Son::Base::m_A << endl;
}
void test02()
{
    Son s;
    //通过对象方式
    s.func();
    s.Base::func();
    //通过类名的方式
    Son::func();
    Son::Base::func(100);
}
int main()
{

    test01();
    test02();
    system("pause");
    return 0;
}