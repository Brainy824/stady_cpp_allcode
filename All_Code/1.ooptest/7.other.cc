//虚基类: 发生虚继承后只有一个数据了
//通过指针找到只有一个
#include <iostream>
using namespace std;
//动物类
class Animal
{
public:
    int m_Age;
};
//羊类
class Sheep:virtual public Animal
{

};
//驼类
class Tuo:virtual public Animal
{

};
//羊驼类
class SheepTuo:public Sheep,public Tuo
{

};
void test01(){
    SheepTuo st;
    st.Sheep::m_Age = 18;
    st.Tuo::m_Age = 28;

    cout <<"st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
    cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;

}
int main()
{



    test01();
    system("pause");
    return 0; 
}