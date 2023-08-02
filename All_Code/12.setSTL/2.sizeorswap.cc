
//统计set容器大小以及交换set容器
//size(); //返回容器中元素的数目
//empty();//判断容器是否为空
//swap();//交换两个集合容器

#include <iostream>
using namespace std;
#include <set>
void printSet(set<int> &s)
{
    for(set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
//大小
void test01()
{
    set<int> s1;
    //插入数据
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    //打印容器
    printSet(s1);

    //判断是否为空
    if(s1.empty())
    {
        cout << "s1为空" << endl;
    }
    else
    {
        cout << "s2不为空" << endl;
        cout << "s1的大小为: " << s1.size() << endl;
    }

}
//交换
void test02()
{
    set<int> s1;
    //插入数据
    s1.insert(100);
    s1.insert(200);
    s1.insert(300);
    s1.insert(400);    
    
    set<int> s2;
    //插入数据
    s2.insert(10);
    s2.insert(20);
    s2.insert(30);
    s2.insert(40);

    cout << "交换前: " << endl;
    printSet(s1);
    printSet(s2);

    cout << "交换后: " << endl;
    s1.swap(s2);
    printSet(s1);
    printSet(s2);


}

int main()
{
    
    //test01();
    test02();
    system("pause");
    return 0; 
}