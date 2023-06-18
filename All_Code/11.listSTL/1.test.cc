//list的基本概念(链表)
//list功能将数据进行链式存储
//和vector一样
#include <iostream>
using namespace std;
#include <list>
void printList(const list<int> &l)
{
    for(list<int>::const_iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
//list容器构造函数
void test01()
{
    //创建list容器
    list<int> L1;
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);

    //遍历容器
    printList(L1);

    //区间方式构造
    list<int>L2(L1.begin(),L1.end());
    printList(L2);

    //拷贝构造
    list<int>L3(L2);
    printList(L3);

    //n个elem
    list<int>L4(10,1000);
    printList(L4);
}
int main()
{
    
    test01();
    system("pause");
    return 0; 
}