//多继承子类
#include <iostream>
using namespace std;
class Base1
{
public:
    Base1()
    {
        int m_A = 100;
    }
    int m_A;
};
class Base2
{
public:
    Base2()
    {
        m_B = 200;
    }
    int m_B;
};
class Son : public Base1,public Base2
{
public:
    Son()
    {
        m_C = 300;
        m_D = 400;
    }

    int m_C;
    int m_D;
};
void test01()
{
    Son s;
    cout << "sizeof Son = " << sizeof(s) << endl;

    cout << "m_A = " << s.Son::m_A << endl;
}
int main()
{
    test01();
    system("pause");
    return 0; 
}