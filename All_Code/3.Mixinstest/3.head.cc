//多态中抽象类
//多态就是想让子类重写父类
#include <iostream>
using namespace std;

class Base
{
public:
    //这个类是纯虚函数
    //只有一个纯虚函数，这个类称为抽象类
    //抽象类的特点
    //1、无法实例化对象
    //2、抽象类的子类 必须要重写父类中的纯虚函数，否则业属于抽象类
    virtual void func() = 0;
};
class Son:public Base
{
public:
    virtual void func()
    {
        cout << "func函数调用" << endl;
    }
};
void test01()
{
    //Base b;//抽象类无法实例化对象
    //new Base;//抽象类无法实例化对象

    Base * base = new Son;//创建一个父类指向子类
    base->func();
}
int main()
{
    
    test01();
    system("pause");
    return 0;

}