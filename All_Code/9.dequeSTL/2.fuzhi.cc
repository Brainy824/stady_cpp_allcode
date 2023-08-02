
//给deque容器进行赋值

#include <iostream>
using namespace std;
#include <deque>
void printDeque(const deque<int>&d)
{
    for(deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    deque<int>d1;
    for(int i = 0; i < 10; i++)
    {
        d1.push_back(i);
    }
    printDeque(d1);

    //第一种 operator= 赋值
    deque<int>d2;
    d2 = d1;
    printDeque(d2);

    //assign 赋值 这也相当于一个拷贝
    deque<int>d3;
    d3.assign(d1.begin(),d1.end());
    printDeque(d3);

    deque<int>d4;
    d4.assign(10,100);
    printDeque(d4);
    
}

int main()
{
    
    test01();
    system("pause");
    return 0; 
}