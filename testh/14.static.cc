#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    static void func()
    {
        m_A = 100;
        cout << "static void func调用" << endl;
    }
    static int m_A;

    int m_B;

};
int Person::m_A = 100;
int Person::m_B = 200;
void test01()
{

    Person p;
    cout << p.m_A << endl;
    Person p2;
    p2.m_A = 200;

    cout << p.m_A << endl;
}
void test02()
{
    Person p;
    cout << Person::m_A << endl;
}
int main()
{

    test01();
    test02();
    system("pause");
    return 0;
}