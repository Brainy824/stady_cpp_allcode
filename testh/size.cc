#include <iostream>
#include <string>
using namespace std;
class Cube
{
public:
    void setL(int l)
    {
        m_L = l;
    }
    int getL()
    {
        return m_L;
    }
    void setW(int w)
    {
        m_W = w;
    }
    int getW()
    {
        return m_W;
    }
    void setH(int h)
    {
        m_H = h;
    }
    int getH()
    {
        return m_H;
    }
    int calculateS()
    {
        return 2*m_L*m_W+2*m_W*m_H + 2*m_L*m_H;
    }
    int calculateV()
    {
        return m_L*m_H*m_W;
    }
private:
    int m_L;
    int m_W;
    int m_H;

};


int main()
{

    Cube c1;
    c1.setL(10);
    c1.setW(10);
    c1.setH(10);

    cout << "面积为: " << c1.calculateS() << endl;
    cout << "体积为: " << c1.calculateV() << endl;

    system("pause");
    return 0;
}