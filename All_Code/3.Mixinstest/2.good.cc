#include <iostream>
#include <string>
using namespace std;
class Calculator
{
public:

    int getResult(string oper)
    {
        if(oper == "+")
        {
            return m_Num1 + m_Num2;
        }
        else if(oper == "-")
        {
            return m_Num1 - m_Num2;
        }
        else if(oper == "*")
        {
            return m_Num1 * m_Num2;
        }
        else
        {
            return m_Num1 / m_Num2;
        }
    }

    int m_Num1;
    int m_Num2;
};
class AbstractCalculator
{
public:
    virtual int getResult()
    {
        return 0;
    }

    int m_Num1;
    int m_num2;
};
class AddCalculator : public AbstractCalculator
{
public:
    int getResult()
    {
        return m_Num1 + m_num2;
    }
};
class SubCalculator:public AbstractCalculator
{
public:
    int getResult()
    {
        return m_Num1 - m_num2;
    }
};
class MuCalculator:public AbstractCalculator
{
public:
    int getResult()
    {
        return m_Num1 * m_num2;
    }
};
void test01()
{
    Calculator c;
    c.m_Num1 = 10;
    c.m_Num2 = 10;

    cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
    cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
    cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;

}
void test02()
{
    AbstractCalculator * abc = new AddCalculator;
    abc->m_Num1 = 10;
    abc->m_num2 = 10;

    cout << abc->m_Num1 << " + " << abc->m_num2 << " = " << abc->getResult() << endl;
    //用完后记得销毁
    delete abc;

    abc = new SubCalculator;
    abc->m_Num1 = 100;
    abc->m_num2 = 100;
    cout << abc->m_Num1 << " - " << abc->m_num2 << " = " << abc->getResult() << endl;
    delete abc;

    abc = new MuCalculator;
    abc->m_Num1 = 100;
    abc->m_num2 = 100;
    cout << abc->m_Num1 << " * " << abc->m_num2 << " = " << abc->getResult() << endl;
    delete abc;

}
int main()
{

    test02();
    system("pause");
    return 0; 
}