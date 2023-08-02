#include <iostream>
#include <string>
using namespace std;

class Base1
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son1:public Base1
{
public: 
    void func()
    {
        m_A = 10;//父类中的公共权限成员 到子类中依然是公共权限
        m_B = 10;
    }
};
int main()
{

    system("pause");
    return 0;
}