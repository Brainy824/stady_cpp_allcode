#include <iostream>
using namespace std;
void mySwap01(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void mySwap02(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
//引用传递
void mySwap03(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    // mySwap01(a,b);//实参不会改变
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;

    // mySwap02(&a,&b);//实参会改变
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;

    mySwap03(a,b);//实参会改变
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    system("pause");
    return 0;
}