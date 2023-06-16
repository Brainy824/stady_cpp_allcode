#include <iostream>
#include <string.h>
#include <string>
using namespace std;
class Teacher{
    public:
        Teacher(string nam,int a,string t):name(nam),age(a),title(t){}
        void display();
    protected:
        string name;
        int age;
        string title;
        
};
void Teacher::display()
{
    cout << "naem: " << name << endl;
    cout << "age: " << age << endl;
    cout << "title: " << title << endl;
}
class Student{
    public:
        Student(char nam[],char s,float sco):strcpy(name1,nam),sex(s),score(sco){}
        void display1();
    protected:
        string name1;
        char sex;
        float score;
};
void Student::display1()
{
    cout << "name: " << name1 << endl;
    cout << "sex: " << sex << endl;
    cout << "score: " << score << endl;
}
class Graduate:public Teacher,public Student{
    public:
        Graduate(string nam,int a,char s,string t,float sco,float w):Teacher(nam,a,t),Student(nam,s,sco),wage(w){}
        void show()
        {
            cout << "name: " << name << endl;
            cout << "age: " << age << endl;
            cout << "sex: " << sex << endl;
            cout << "score: " << score << endl;
            cout << "title: " << title << endl;
            cout << "wages: " << wage << endl;
        }
    private:
        float wage;
};
int main()
{
    Graduate grad1("wang_li",24,'f',"assistant",89.5,2400);
    grad1.show();
    return 0;
}