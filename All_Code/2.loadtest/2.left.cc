#include <iostream>
using namespace std;
//左移运算符重载
class Person
{
    friend ostream & operator<<(ostream &out, Person &p);
public:
    Person(int a,int b)
    {
        m_A = a;
        m_B = b;
    }
private:

    //利用成员函数重载 左移运算符
    // void operator<<(Person &p)
    // {

    // }

    int m_A;
    int m_B;
};
ostream & operator<<(ostream &out ,Person &p)
{
    out << "m_A = " << p.m_A << " m_B = " << p.m_B << endl;
    return out;
}
void test01()
{
    Person p(10,10);


    cout << p << endl;
}
int main()
{

    test01();
    system("pause");
    return 0;
}