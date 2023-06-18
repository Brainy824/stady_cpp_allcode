
//利用算法实现对deque容器进行排序
//sort要记得包含头文件algorithm
#include <iostream>
using namespace std;
#include <deque>
#include <algorithm>
void printDeque(deque<int>& d)
{
    for(deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
//deque容器排序
void test01()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(100);
    d.push_front(200);
    d.push_front(300);

    printDeque(d);

    //排序 默认排序规则 从小到大 升序
    //对于支持随机访问的迭代器的容器，都可以利用sort算法直接进行排序
    //vector容器也可以利用sort算法法对其进行排序
    sort(d.begin(),d.end());
    cout << "排序后: " << endl;
    printDeque(d);
}

int main()
{
    
    test01();
    system("pause");
    return 0; 
}