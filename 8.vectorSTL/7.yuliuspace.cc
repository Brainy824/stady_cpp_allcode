//vector预留空间
//减少vector在动态扩展容量时的扩展次数

#include <iostream>
using namespace std;
#include <vector>
void test01()
{
    vector<int> v;

    //利用reserve预留空间
    v.reserve(100000);

    //找空间分配
    int num = 0; //统计开辟次数
    int * p = NULL;
    for(int i = 0; i < 100000; i++)
    {
        v.push_back(i);

        if(p != &v[0])
        {
            p = &v[0];
            num++;
        }
    }

    cout << "num = " << num << endl;
    
}

int main()
{
    
    test01();
    system("pause");
    return 0; 
}