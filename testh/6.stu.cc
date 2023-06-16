#include <iostream>
#include <string>
using namespace std;
class Studet
{
public:
    string m_Name;
    int m_Id;


    void showStudent()
    {
        cout << "姓名: " << m_Name << " 学号: " << m_Id << endl;

    } 
    void setName(string name)
    {
        m_Name = name;
    }
    void setId(int d)
    {
        m_Id = d;
    }

};
int main()
{   
    Studet stu1;
    stu1.setName("张三");
    stu1.setId(1);
    stu1.showStudent();
    system("pause");
    return 0;
}