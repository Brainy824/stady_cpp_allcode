
//掌握常用的排序算法

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <functional>
void myPrint(int val)
{
    cout << val << " ";
}
//常用排序算法 sort
void test01()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(30);
    v.push_back(50);
    v.push_back(20);
    v.push_back(40);

    //利用sort进行升序
    sort(v.begin(),v.end());
    for_each(v.begin(),v.end(),myPrint);
    cout << endl;

    //改变为降序
    //使用内建的对象  greater<int>()从大到小
    sort(v.begin(),v.end(),greater<int>());
    for_each(v.begin(),v.end(),myPrint);
    cout << endl;

}
int main()
{
    
    test01();
    system("pause");
    return 0; 
}