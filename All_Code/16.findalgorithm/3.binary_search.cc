
//查找指定元素是否存在
//查找指定的元素 查到返回true 否则返回false

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
//常用查找算法 binary_search
void test01()
{
    vector<int> v;
    for(int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    //查找容器中是否有9 元素
    //注意 容器必须是有序的序列
    //如果无序结果未知
    bool ret = binary_search(v.begin(),v.end(),9);
    if(ret)
    {
        cout << "找到了元素" << endl;
    }
    else
    {
        cout << "未找到元素" << endl;
    }


}

int main()
{
    
    test01();
    system("pause");
    return 0; 
}