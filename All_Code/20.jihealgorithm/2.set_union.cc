
//常用集合算法 set_union
//求两个容器的并集
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
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
    vector<int>vTarget;
    //目标容器开辟空间
    //最特殊的情况两个容器没有交集 ， 并集就是两个容器size相加
    vTarget.resize(v1.size() + v2.size());

    vector<int>::iterator itEnd = set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());

    //遍历
    for_each(vTarget.begin(),vTarget.end(),myPrint);
    cout << endl;
    //要利用别人的迭代器才能拿到真正结束的位置
    for_each(vTarget.begin(),itEnd,myPrint);
    cout << endl;

}

int main()
{
    
    test01();
    system("pause");
    return 0; 
}