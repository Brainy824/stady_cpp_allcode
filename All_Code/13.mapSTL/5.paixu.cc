
//map容器默认排序规则为 按照key值进行从小到大排序，掌握如何改变排序规则
//利用仿函数 进行改变 排序顺序

#include <iostream>
using namespace std;
#include <map>
//仿函数
class MyCompare
{
public:
    bool operator()(int v1,int v2)
    {
        //降序
        return v1 > v2;
    }
};
//map容器排序
void test01()
{
    //利用仿函数修改排序
    map<int,int,MyCompare> m;
    m.insert(pair<int,int>(1,10));
    m.insert(make_pair(2,20));
    m.insert(make_pair(3,30));
    m.insert(make_pair(4,40));
    m.insert(make_pair(5,50));

    //遍历
    for(map<int,int,MyCompare>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "key = " << it->first << " value = " << it->second << endl;
    }
    cout << endl;
}

int main()
{
    
    test01();
    system("pause");
    return 0; 
}