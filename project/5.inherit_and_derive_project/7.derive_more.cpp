#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
        Student(int n,string nam):num(n),name(nam){}
        void display()
        {
            cout << "num: " << num << endl;
            cout << "name: " << name << endl;
        }
    protected:
        int num;
        string name;
};
class Student1:public Student{
    public:
        Student1(int n,string nam,int a):Student(n,nam),age(a){}
        void show()
        {
            display();
            cout << "age: " << age << endl;
        }
    private:
        int age;
};
class Student2:public Student1{
    public:
        Student2(int n,string nam,int a,int s,int a1,string na):Student1(n,nam,a),montor(a1,na),score(s){}
        
        void show_all()
        {
            show();
            cout << "score: " << score << endl;
            montor.display();
        }
    private:
        Student montor;
        int score;
};
int main()
{
    Student2 stud(10010,"li",17,89,99,"zhen");
    stud.show_all();
    return 0;
}