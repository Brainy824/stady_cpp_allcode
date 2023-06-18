
//map基本概念
//快速根据key值快速找到value值
//自动排序   高效
//对map容器进行构造和赋值
//map容器中不允许有重复的key，重复插入会插不进去
//map中所有元素都是成对出现，插入数据时候要使用对组

#include <iostream>
using namespace std;
#include <map>
void printMap(map<int,int> &m)
{
    for(map<int,int>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "key = " << (*it).first << " value = " << (*it).second << endl;
    }
    cout << endl;
}
//模板参数列表中有两个参数
void test01()
{
    map<int,int> m;
    //匿名的对组 插入<key,value>会按照key来排序
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));
    m.insert(pair<int,int>(4,40));

    printMap(m);

    //构造拷贝
    map<int,int> m2(m);
    printMap(m2);

    //赋值
    map<int,int> m3;
    m3 = m2;
    printMap(m3);

}

int main()
{
    
    test01();
    cout << "hello" << endl;
    //system("pause");
    return 0; 
}