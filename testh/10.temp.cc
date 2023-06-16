#include <iostream>

using namespace std;

class Person
{
public:
    Person()
    {
        cout << "无参构造函数调用" << endl;
    }
    Person(int a)
    {
        age = a;
        cout << "有参构造函数调用" << endl;
    }
    //拷贝构造函数
    Person (const Person &p)
    {
        age = p.age;
        cout << "拷贝构造函数调用" << endl;
    }
    ~Person()
    {
        cout << "析构函数调用" << endl;
    }



    int age;
};


void test01()
{
    Person p1;
    Person p2(10);
    Person p3(p2);

    cout << "p2年龄为: " << p2.age << endl;
    cout << "p3年龄为: " << p3.age << endl;

}
int main()
{

    test01();
    system("pause");
    return 0;
}