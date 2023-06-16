//构造简单的派生类函数
#include <iostream>
#include <string>
using namespace std;
class Student
{
    public:
        Student(int n,string nam,char s):num(n),name(nam),sex(s){}
        ~Student(){}
    protected:
        int num;
        string name;
        char sex;
};
class Student1:public Student
{
    public:
        Student1(int n,string nam,char s,int a,string ad):Student(n,nam,s),age(a),addr(ad){}
        void show()
        {
            cout << "num: " << num << endl;
            cout << "name: " << name << endl;
            cout << "sex: " << sex << endl;
            cout << "age: " << age << endl;
            cout << "address: " << addr << endl;
        }
        ~Student1(){}
    private:
        int age;
        string addr;
};
int main()
{
    Student1 stud1(10010,"wang-li",'f',19,"115 beijing road,shanghai");
    Student1 stud2(10011,"zhang-fan",'m',21,"213 shanghai road,beijing");
    stud1.show();
    stud2.show();
    return 0;
}