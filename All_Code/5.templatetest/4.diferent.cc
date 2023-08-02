#include <iostream>
#include <string>
using namespace std;

//普通函数调用可以发生隐式类型转换
int myAdd01(int a,int b)
{
    return a + b;
}
//函数模板
template<class T>
T myAdd02(T a,T b)
{
    return a + b;
}
void test01()
{
    int a = 10;
    int b = 20;
    char c = 'c';
    cout << myAdd01(a,c) << endl;

    cout << myAdd02(a,b) << endl;
}
int main()
{

    test01();
    system("pause");
    return 0;
}