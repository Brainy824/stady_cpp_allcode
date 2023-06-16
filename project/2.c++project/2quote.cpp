#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int &b = a;
    int &c = b;
    a = a * a;

    cout << &a << endl << &b << endl<< &c << endl;
    b = b/5;
    cout << b << endl << a << endl;
    return 0;
}