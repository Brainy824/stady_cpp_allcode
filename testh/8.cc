#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    void setName(string name)
    {
        m_Name = name;
    }
    string getName()
    {
        return m_Name;
    }
    void setAge(int n)
    {
        if(n < 0 || n > 150)
        {
            m_Age = 0;
            cout << "你个老妖精!";
            return;
        }
        m_Age = n;
    }
    int getAge()
    {
        return m_Age;
    }
    void setLover(string lover)
    {
        m_Lover = lover;
    }
    string getLover()
    {
        return m_Lover;
    }
private:
    string m_Name;

    int m_Age;

    string m_Lover;

    
};

int main()
{

    Person p1;
    p1.setName("张三");
    cout << "姓名为: " << p1.getName() << endl;

    cout << "年龄: " << p1.getAge() << endl;

    p1.setLover("msdkfjsdfj");
    
    cout << "skjfk: " << p1.getLover() << endl;

    p1.setAge(160);
    cout << "年龄为: " << p1.getAge() << endl;
    system("pause");

    return 0;
}