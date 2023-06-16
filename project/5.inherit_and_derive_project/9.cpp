#include <iostream>
using namespace std;
class A{
    public:
        int a;
        void display();
};
class B{
    public:
        int a;
        void display();
};
class C:public A,public B{
    public:
        int b;
        void show();
};
class N{
    public:
        int a;
        void display(){
            cout << "A::a =  " << a << endl;
        }
};
class A:public N{
    public:
        int al;
};
class B:public N{
    public:
        int a2;
};
class C:public A,public B{
    public:
        int a3;
        void show(){cout << "a3 = " << a3 << endl;}

};
int main()
{
    C c1;
    c1.al = 9;


    
}