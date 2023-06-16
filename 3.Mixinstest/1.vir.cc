//动态的多态
#include <iostream>
using namespace std;
class Animal
{
public:
//这里很重要，继承关系
    virtual void speak()
    {
        cout << "动物在说话" << endl;
    }

};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << "小猫在说话" << endl;
    }

};
class Dog : public Animal
{
public:
    void speak()
    {
        cout << "小狗在说话" << endl;
    }
};
void doSpeak(Animal &animal)
{
    animal.speak();
}
void test01()
{
    Cat cat;
    doSpeak(cat);
    Dog dog;
    doSpeak(dog);
}
void test02()
{
    cout << "sizeof Animal = " << sizeof(Animal) << endl;

}
int main()
{


    test01();
    test02();
    system("pause");
    return 0; 
}