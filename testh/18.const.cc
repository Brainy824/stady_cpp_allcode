#include <iostream>
using namespace std;
class Person
{
public:
    //this指针的本质 是指针常量 指针的指向是不可以修改的
    //const Person * const this;
    void showPerson() const
    {
        this->m_A = 100;//指针指向的值也不可修改
        //this = NULL;//this指针不可以修改指针的指向的
    }
    void func()
    {

    }

    mutable int m_A;
};
void test01()
{
    Person p;
    p.showPerson();
}
void test02()
{
    Person p;
    p.m_A = 100;
    //p.func();
    p.showPerson();
}
int main()
{
    test02();

    system("pause");
    return 0;
}