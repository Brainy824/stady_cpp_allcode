#include <iostream>
using namespace std;

class MyInteger
{
    friend ostream & operator<<(ostream& cout,MyInteger myint);
public:
    MyInteger()
    {
        m_Num = 0;
    }
    MyInteger& operator++()
    {
        m_Num++;
        return *this;
    }
private:
    int m_Num;
};

//重载一下左移运算符
ostream & operator<<(ostream& cout,MyInteger myint)
{
    cout << myint.m_Num;
    return cout;
}
void test01()
{
    MyInteger myint;

    cout << ++(++myint) << endl;
}
int main()
{
    test01();
     
     system("pause");
     return 0;
}