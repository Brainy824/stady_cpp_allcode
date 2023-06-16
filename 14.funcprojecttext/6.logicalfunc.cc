
//实现逻辑运算

#include <iostream>
using namespace std;
#include <functional>
#include <vector>
#include <algorithm>
//内建逻辑对象_逻辑仿函数
//逻辑非 logical_not

void test01()
{
    vector<bool> v;
    v.push_back(true);
    v.push_back(false);
    v.push_back(true);
    v.push_back(false);

    for(vector<bool>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    //利用逻辑非 将容器v 搬运到 容器v2中，并执行取反操作
    vector<bool> v2;
    //开辟空间
    v2.resize(v.size());
    //原容器的起始迭代器 、结束迭代器、目标容器的迭代器、
    transform(v.begin(),v.end(),v2.begin(),logical_not<bool>());
    //遍历v2这个容器
    for(vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

}
int main()
{
    
    test01();
    system("pause");
    return 0; 
}