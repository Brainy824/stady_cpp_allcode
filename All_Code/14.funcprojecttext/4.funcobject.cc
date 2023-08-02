
//STL内建了一些函数对象
//算术仿函数
//关系仿函数
//逻辑仿函数
//需要包含头文件<function>
#include <iostream>
using namespace std;
#include <functional>
//算术仿函数
//negate 一元仿函数 取反仿函数
void test01()
{
    negate<int> n;
    
    cout << n(50) << endl;
}
//plus 二元仿函数 相加

//默认认定传递的是同类型的
void test02()
{
    plus<int> p;

    cout << p(10,30) << endl;
}
int main()
{
    
    // test01();
    test02();
    system("pause");
    return 0; 
}