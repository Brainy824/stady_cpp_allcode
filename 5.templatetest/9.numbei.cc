//类模板中成员函数的创建时机
#include <iostream>
#include <string>
using namespace std;
class Person1
{
public:
    void showPerson1()
    {
        cout << "Person1 show" << endl;
    } 
};
class Person2
{
public:
    void showPerson2()
    {
        cout << "Person2 show" << endl;
    } 
};
template<class T>
class MyClass
{
public:
    T obj;

    //类模板中的成员函数
    void func1()
    {
        obj.showPerson1();
    }

    void func2()
    {
        obj.showPerson2();
    }

};

void test01()
{
    MyClass<Person2>m;//创建谁的就只能调用谁的
    // m.func1();
    m.func2();
}
int main()
{
    test01();

    system("pause");
    return 0;
}