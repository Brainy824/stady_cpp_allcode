#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "默认构造函数调用" << endl;

    }
    Person(int age)
    {
        m_Age = age;
        cout << "有参构造函数调用" << endl;
    }
    Person(const Person &p)
    {
        m_Age = p.m_Age;
        cout << "拷贝构造函数调用" << endl;
    }
    ~Person()
    {
        cout << "析构函数调用" << endl;
    }


    int m_Age;
};
void test01()
{
    Person p1(20);
    Person p2(p1);

    cout << "p2的年龄为: " << p2.m_Age << endl;
}
//值传递方式给函数参数传值
void doWork(Person p)
{

}
void test02()
{
    Person p;
    doWork(p);
}
//值方式返回局部对象
Person doWork2()
{
    Person p1;
    cout << (int *)&p1 << endl;
    return p1;

}
void test03()
{
    Person p = doWork2();
    cout << (int *)&p << endl;
}
int main()
{
    test03();

    system("pause");
    return 0;
}