
//对list容器进行数据的插入和删除

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
void test01()
{
    list<int>L;

    //尾插
    L.push_back(10);
    L.push_back(20);
    L.push_back(30);
    L.push_back(40);

    //头插
    L.push_front(100);
    L.push_front(200);
    L.push_front(300);

    printList(L);

    //尾删
    L.pop_back();
    printList(L);

    //头删
    L.pop_front();
    printList(L);

    //insert插入
    list<int>::iterator it = L.begin();
    L.insert(++it,1000);
    printList(L);

    //删除
    it = L.begin();
    L.erase(it);
    printList(L);

    //移除
    L.push_back(10000);
    printList(L);
    //删掉指定的数值(是这里面的全部这个值)
    L.remove(1000);
    printList(L);

    //清空
    L.clear();
    printList(L);

}
int main()
{
    
    test01();
    system("pause");
    return 0; 
}