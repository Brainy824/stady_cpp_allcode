#include <iostream>
#include <string>
using namespace std;

class Person
{
    public:
        string m_Name;
    
    protected:
        string m_Car;
    
    private:
        int m_Password;
    public:
        void func()
        {
            m_Name = "张三";
            m_Car = "拖拉机";
            m_Password = 123456;
            cout << "姓名: " << m_Name << " 车: " << m_Car << " 密码: " << m_Password << endl;
            
        }
};
int main()
{
    Person p1;
    p1.m_Name = "李四";
    p1.func();

    system("pause");
    return 0;
}