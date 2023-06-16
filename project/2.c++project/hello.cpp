#include <iostream>
using namespace std;

class A{
    private:
        int i;
    public:
        void f();
};
void A::f()
{
    int j = 10;
    i = 10;
}

int main(){
/*     cout<<"hello world I am "<<18 <<"today"<<endl;
    int age;
    cin>>age;
    cout<<"you are "<< age <<"."; */
    A a;
    a.f();
    
    return 0;
    
}