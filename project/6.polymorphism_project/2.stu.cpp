#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
        Student(int,string,float);
        void display();
    protected:
        int num;
        string name;
        float score;

};
Student::Student(int n,string nam,float s):num(n),name(nam),score(s){}

void Student::display()
{
    cout << "num: " << num << "\nname: " << name << "\nscodre: " << score << "\n\n";
}

//第一个派生类
class Graduate:public Student{
    public:
        Graduate(int,string,float,float);
        void display();
    private:
        float wage;
};

Graduate::Graduate(int n,string nam,float s,float w):Student(n,nam,s),wage(w){}

void Graduate::display()
{
    cout << "num: " << num << endl <<"name: " << name << endl << "score: " << score << endl << "wage: " << wage << endl;
    
}

int main()
{
    Student stud1(1001,"li",87.5);
    Graduate grad1(2001,"wang",98.5,1200);
    Student *pt = &stud1;
    pt->display();
    pt = &grad1;
    pt->display();
    return 0;
}