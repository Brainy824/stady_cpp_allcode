
//掌握常用的算术生成算法
//头文件 <numeric>

#include <iostream>
using namespace std;
#include <numeric>
#include <vector>



void test01()
{
    vector<int> v;
    for(int i = 0; i <= 100; i++)
    {
        v.push_back(i);
    }
    //累加算法  给定起始值0
    int total = accumulate(v.begin(),v.end(),0);

    cout << "total = " << total << endl;
}

int main()
{
    
    test01();
    system("pause");
    return 0; 
}