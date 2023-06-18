
//双端数组，可以对头端进行插入删除操作 
//deque容器和vector容器的构造方式几乎一致，灵活使用即可

#include <iostream>
using namespace std;
#include <deque>
//加const的目的是防止函数内容被修改
void printDeque(const deque<int>&d)
{
    //const_iterator只读迭代器
    for(deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        //*it = 100; 容器里面的数据不可以修改了
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    deque<int> d1;
    for(int i = 0; i < 10; i++)
    {
        d1.push_back(i);
    }
    printDeque(d1);

    //拷贝
    deque<int>d2(d1.begin(),d1.end());
    printDeque(d2);

    //输入10个 100
    deque<int>d3(10,100);
    printDeque(d3);

    //拷贝构造
    deque<int>d4(d3);
    printDeque(d4);

}

int main()
{
    
    test01();
    system("pause");
    return 0; 
}