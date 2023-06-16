#include <iostream>
#include <string>
using namespace std;
class Building
{
    friend void goodGay(Building *building);//作为一个友元全局函数 可以访问私有成员
public:
    Building()
    {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }
public:
    string  m_SittingRoom;
private:
    string m_BedRoom;
};
void goodGay(Building *building)
{
    cout << "好基友的全局函数 正在访问 : " << building->m_SittingRoom << endl;

    cout << "好基友全局函数 正在访问: " << building->m_BedRoom << endl;
    
}
void test01()
{
    Building building;
    goodGay(&building);
}
int main()
{
    test01();

    system("pause");
    return 0;
}