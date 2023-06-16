//公有继承
#include <iostream>
using namespace std;
class Student{
    public:
        void get_value()
        {
            cin >> num >> name >> sex;
        }
        void display()
        {
            cout << "num: " << num << endl;
            cout << "name: " << name << endl;
            cout << "sex: " << sex << endl;
        }
    private:
        int num;
        string name;
        char sex;
};
class Student1:public Student{    //声名为公有，所以只能调用公有的
    public:
        void get_value1()
        {
            cin >> age >> addr;
        }
        void display1()
        {
            cout << "age: " << age << endl;
            cout << "address: " << addr << endl;
        }
    private:
        int age;
        string addr;
};
int main()
{

    Student1 stud;
    stud.get_value();
    stud.get_value1();
    stud.display();
    stud.display1();
    return 0;
}