
//set容器排序
//利用仿函数，可以改变排序规则

#include <iostream>
using namespace std;
#include <set>
//仿函数本质上是一个类型
//利用仿函数可以指定set容器的排序规则
class MyCompare
{
public:
    bool operator()(int v1,int v2)
    {
        return v1 > v2;
    }
};
//set容器排序
void test01()
{
    set<int> s1;

    s1.insert(10);
    s1.insert(20);
    s1.insert(40);
    s1.insert(60);
    s1.insert(50);

    for(set<int>::iterator it = s1.begin(); it != s1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    //指定排序规则为从大到小
    set<int,MyCompare> s2;

    s2.insert(10);
    s2.insert(20);
    s2.insert(40);
    s2.insert(60);
    s2.insert(50);

    for(set<int,MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
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