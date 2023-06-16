#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int &b = a;
    int &c = b;
    c = 30;
    cout << "a" << a << endl;
    cout << "b" << b << endl;
    cout << "c" << c << endl;

    b = 100;
    cout << "a" << a << endl;
    cout << "b" << b << endl;   

    system("pause");
    return 0;
}