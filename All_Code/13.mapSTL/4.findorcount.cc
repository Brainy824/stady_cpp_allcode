
//对map容器进行查找数据以及统计数据
//统计 count(结果不是0，就是1)
#include <iostream>
using namespace std;
#include <map>
void test01()
{
    //查找
    map<int,int> m;
    m.insert( pair<int,int>(1,10));
    m.insert( pair<int,int>(2,20));
    m.insert( pair<int,int>(3,30));

    //不管有没有找到都会返回一个迭代器
    map<int,int>::iterator pos = m.find(3);

    if(pos != m.end())
    {
        cout << "查到了元素key = " << (*pos).first << " value = " << pos->second << endl;
    }
    else
    {
        cout << "未找到元素" << endl;
    }
    //统计  
    int num = m.count(3);
    cout << "num = " << num << endl;

}

int main()
{
    
    test01();
    system("pause");
    return 0; 
}