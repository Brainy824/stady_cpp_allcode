#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    Person()
    {
        cout << "构造函数的调用" << endl;
    }


    ~Person()
    {
        cout << "析构函数" << endl;
    }

};
void test01()
{
    Person p;
}
int main()
{
    test01();


    system("pause");
    return 0;
}