//类模板和函数模板的区别
//1、类模板没有自动类型推导使用方式
//2、类模板在模板参数列表中可以有默认参数
#include <iostream>
#include <string>
using namespace std;
//默认参数可以给定
template<class NaemType,class AgeType = int>
class Person
{
public:
    Person(NaemType name, AgeType age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    void showPerson()
    {
        cout << "name: "<< this->m_Name << " age = " << this->m_Age << endl;
    
    }
    
    NaemType m_Name;
    AgeType m_Age;
};
void test01()
{
    //Person p("孙悟空",1000);//错误的，无法用自动类型推导

    Person<string,int> p1("孙悟空",1000);

    p1.showPerson();
}
void test02()
{
    Person<string>p("猪八戒",999);

    p.showPerson();

}
int main()
{


    test02();
    system("pause");
    return 0; 
}