#include <iostream>
using namespace std;

//多态的案例2
class AbstractDrinking
{
public:
    //煮水
    virtual void Boil() = 0;

    //冲泡
    virtual void Brew() = 0;

    //倒入杯中
    virtual void PourInCup() = 0;

    //加入辅助的佐料
    virtual void PutSomething() = 0;

    void makeDring()
    {
        Boil();
        Brew();
        PourInCup();
        PutSomething();
    }
};
//制作咖啡
class Coffee:public AbstractDrinking
{
public:
    virtual void Boil()
    {
        cout << "煮农夫山泉" << endl;

    }
    virtual void Brew()
    {
        cout << "冲泡咖啡" << endl;
    }
    virtual void PourInCup()
    {
        cout << "倒入杯中" << endl;
    }
    virtual void PutSomething()
    {
        cout << "加入糖和牛奶" << endl;
    }
};
//制作茶叶
class Tea : public AbstractDrinking
{
public:
    virtual void Boil()
    {
        cout << "煮农夫山泉" << endl;

    }
    virtual void Brew()
    {
        cout << "冲泡茶叶" << endl;
    }
    virtual void PourInCup()
    {
        cout << "倒入杯中" << endl;
    }
    virtual void PutSomething()
    {
        cout << "加入柠檬、枸杞" << endl;
    }
};
//制作函数
void doWork(AbstractDrinking * abs)//父类的指针指向子类对象
{
    abs->makeDring();
}
void test01()
{
    doWork(new Coffee);

    doWork(new Tea);
}
int main()
{

    test01();
    system("pause");
    return 0; 
}