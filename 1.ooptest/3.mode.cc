#include <iostream>
#include <string>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base构造函数!" << endl;
    }
    ~Base()
    {
        cout << "Base析构函数!" << endl;
    }    
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son:public Base
{
public:
    Son()
    {
        cout << "Son构造函数!" << endl;
    }
    ~Son()
    {
        cout << "Son析构函数!" << endl;
    }
    int m_D;
};

void test01()
{
    Son s;
    
}

int main()
{

    test01();

    system("pause");
    return 0;
}