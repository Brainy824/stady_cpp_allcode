#include <iostream>
#include <string>
using namespace std;
class Student
{
    public:
        //设置姓名
        void setname(string Name)
        {
            name = Name;
        }
        string getname()
        {
            return name;
        }
        void setage(int mage)
        {
            if(mage < 0 || mage > 150)
            {
                age = 0;
                cout << "你这个老妖精" << endl;
                return ;
            }
            age = mage;
        }
        int getage()
        {
            //age = 0;
            return age;

        }
        //设置请人
        string setlover(string nlover)
        {
            lover = nlover;
            return lover;
        }
    private:
        string name;
        int age;
        string lover;
};
int main()
{
    Student stu;
    stu.setname("张三");
    cout << stu.getname() << endl;
    stu.setage(333);
    cout << stu.getage() << endl;
    cout << stu.setlover("章") << endl;
    system("pause");
    return 0;
}