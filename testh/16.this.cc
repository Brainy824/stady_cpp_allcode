#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    Person(int age)
    {
        this->age = age;
    }


    Person& PersonAddAge(Person &p)//链式编程引用
    {
        this->age += p.age;
        return *this;
    }

    int age;
};

void test01()
{
    Person p1(18);
    cout << "p1的年龄为: " << p1.age << endl;
}
void test02()
{
    Person p1(10);

    Person p2(10);

    p2.PersonAddAge(p1).PersonAddAge(p1);

    cout << "p2的年龄为: " << p2.age << endl;

}
int main()
{
    test02();

    system("pause");
    return 0;
}