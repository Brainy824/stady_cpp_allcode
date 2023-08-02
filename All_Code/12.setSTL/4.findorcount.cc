
//对set容器进行查找数据以及统计数据
//find(key);//查找key是否存在，若存在，返回该键的迭代器；若不存在，返回set.end();
//count(key); //统计key的元素个数

#include <iostream>
using namespace std;
#include <set>
void test01()
{
    //查找
    set<int> s1;
    //插入数据
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    set<int>::iterator pos = s1.find(300);

    if(pos != s1.end())
    {
        cout << "找到元素: " << *pos << endl;
    }
    else
    {
        cout << "未找到元素" << endl;
    }
}
//统计
void test02()
{
    //查找
    set<int> s1;
    //插入数据
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    s1.insert(30);
    s1.insert(30);
    s1.insert(30);

    //统计30的个数
    int num = s1.count(30);
    //对于set而言 统计结果 要么是0 要么是1
    cout << "num = " << num  << endl;

}
int main()
{
    
    //test01();
    test02();
    system("pause");
    return 0; 
}