
//求两个集合的差集(也就是并集去除自己的集合，就是差集)

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
void myPrint(int val)
{
    cout << val << " ";
}
void test01()
{
    vector<int> v1;
    vector<int> v2;

    for(int i = 0; i < 10; i++)
    {
        v1.push_back(i);
        v2.push_back(i + 5);
    }

    //创建一个目标容器
    vector<int> vTarget;
    //给目标容器开辟空间
    //最特殊情况 两个容器没有交集 取两个容器中大的size作为目标容器开辟空间

    vTarget.resize(max(v1.size(),v2.size()));

    cout << "v1和v2的差集为: " << endl;

    vector<int>::iterator itEnd = set_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());
    
    //遍历
    for_each(vTarget.begin(),vTarget.end(),myPrint);
    cout << endl;
    //真正的差集
    for_each(vTarget.begin(),itEnd,myPrint);
    cout << endl;

    cout << "=================================" << endl;
    cout << "v2和v1的差集为: " << endl;
    //上面定义了这里就不用重复定义
    itEnd = set_difference(v2.begin(),v2.end(),v1.begin(),v1.end(),vTarget.begin());
    
    //遍历
    for_each(vTarget.begin(),vTarget.end(),myPrint);
    cout << endl;
    //真正的差集
    for_each(vTarget.begin(),itEnd,myPrint);
    cout << endl;

}

int main()
{
    
    test01();
    system("pause");
    return 0; 
}