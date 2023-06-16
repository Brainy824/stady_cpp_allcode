#include <iostream>
using namespace std;
//设计一个圆类，求圆的周长
//圆求周长的公式: 2*pi*半径
const double pi = 3.14;
class Circle
{
    //访问权限
public:
    //属性
    int m_r;
    //行为
    //获取圆的周长
    double calculateZC()
    {
        return 2*pi*m_r;
    }
private:




};
int main()
{
    Circle c1;
    c1.m_r = 10;
    cout << "圆的周长: " << c1.calculateZC() << endl;
    
    system("pause");
    return 0;
}