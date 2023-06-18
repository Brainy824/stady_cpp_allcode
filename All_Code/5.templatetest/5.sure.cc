//既然提供了类模板，就不要提供普通函数
//否则会产生二义性
#include <iostream>
using namespace std;

//普通函数和函数模板调用规则
//如果普通函数模板和普通函数都可以调用，有先调用普通函数
//可以通过空模板参数列表 强制调用 函数模板
//函数模板可以发生重载
//如果函数模板可以产生更好的匹配，优先调用函数模板
void myPrint(int a,int b)
{
    cout << "调用的普通函数" << endl;

}
template<class T>
void myPrint(T a,T b)
{
    cout << "调用的模板" << endl;
}
void test01()
{
    int a = 10;
    int b = 20;

    //myPrint(a,b);
    //通过空模板参数列表，强制调用函数模板
    myPrint<>(a,b);
}
int main()
{


    test01();
    system("pause");
    return 0; 
}