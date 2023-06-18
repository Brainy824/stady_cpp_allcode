
//vector基本概念

#include <iostream>
using namespace std;
#include <vector>
void printVertor(vector<int>&v)
{
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    vector<int>v1;//默认构造 无参构造

    for(int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVertor(v1);

    //通过区间的方式进行构造
    vector<int>v2(v1.begin(),v1.end());
    printVertor(v2);

    //n个elem方式构造
    vector<int>v3(10,100);
    printVertor(v3);
    
    //拷贝构造
    vector<int>v4(v3);
    printVertor(v4);
}

int main()
{
    
    test01();
    system("pause");
    return 0; 
}