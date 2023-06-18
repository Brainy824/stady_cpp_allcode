
//对deque容器的大小进行操作
//判断是否为空 --empty
//返回元素个数 --size
//重新指定个数 --resize
#include <iostream>
using namespace std;
#include <deque>

void printDeque(const deque<int> &d)
{
    for(deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
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

    if(d1.empty())
    {
        cout << "d1为空" << endl;
    }
    else
    {
        cout << "d1不为空" << endl;
        cout << "d1的大小为: " << d1.size() << endl;
        //deque容器没有容量概念
    }

    //重新指定大小
    //d1.resize(15);
    d1.resize(15,1);//空闲自定义赋值
    printDeque(d1);

}

int main()
{
    
    test01();
    system("pause");
    return 0; 
}