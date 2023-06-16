//面向对象的三大特性
//封装、继承、多态
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a[] ={"adfsdfsffd","askdf","skdfask"};
    for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++)
    {
        cout << a[i] << endl;
    }

    system("pause");
    return 0;
}