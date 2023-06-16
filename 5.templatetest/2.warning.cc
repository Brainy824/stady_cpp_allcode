#include <iostream>
using namespace std;
template<class T> //typename可以替换成class
//要一个一致的T
void mySwap(T&a,T&b)
{
    T temp = a;
    a = b;
    b = temp;
}

void test01()
{
    int a = 10;
    int b = 20;
    mySwap(a,b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
template<calss T>
void func()
{
    cout << "func 调用" << endl;
}
 
void test02()
{
    func();
}

int main()
{

    test01();
    system("pause");
    return 0;
}