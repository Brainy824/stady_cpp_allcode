
//将容器中的元素反转，以及将容器中的数据进行排序
//所有不支持随机访问迭代器，不可以用标准算法
//不支持随机访问迭代器的容器，内部会提供对应的一些算法
#include <iostream>
using namespace std;
#include <list>
#include <algorithm>
void printList(const list<int> &l)
{
    for(list<int>::const_iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
void test01()
{
    //反转
    list<int>L1;

    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);
    L1.push_back(50);
    cout << "反转前的打印" << endl;
    printList(L1);

    //反转链表
    L1.reverse();
    cout << "反转后的打印" << endl;
    printList(L1);

}
bool myCompare(int v1,int v2)
{
    //降序 就让第一个数 > 第二个数
    return v1 > v2;
}

//排序
void test02()
{
    list<int>L1;

    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);
    L1.push_back(50);

    cout << "排序前: " << endl;
    printList(L1);

    cout << "排序后: " << endl;
    L1.sort();
    printList(L1);

    L1.sort(myCompare);
    printList(L1);

}

int main()
{
    
    //test01();
    test02();
    system("pause");
    return 0; 
}