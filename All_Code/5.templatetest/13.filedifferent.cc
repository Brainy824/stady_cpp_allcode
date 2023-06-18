

//类模板分文件编写问题及解决
//.hpp就是类模板文件，及声明和实现都在这个文件里面
//主流的解决方法，将类模板成员函数写到一起，并将后缀名改为.hpp
#include "13.filedifferent.h"

// #include <iostream>
// #include <string>
// using namespace std;

// template<class T1,class T2>
// class Person
// {
// public:
//     Person(T1 name,T2 age);
//     void showPerson();


//     T1 m_Name;
//     T2 m_Age;
// };

template<class T1,class T2>
Person<T1,T2>::Person(T1 name,T2 age)
{
    this->m_Name = name;
    this->m_Age = age;
}

template<class T1,class T2>
void Person<T1,T2>::showPerson()
{
    cout << "姓名: " << this->m_Name << " 年龄: " << m_Age << endl;

}
void test01()
{
    Person<string,int> p("Jerry",18);
    p.showPerson();
}

int main()
{

    test01();
    system("pause");
    return 0;
}