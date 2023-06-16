#include <iostream>
using namespace std;
class Point
{
    public:
        void setx(int x1)
        {
            x = x1;
        }
        int getx()
        {
            return x;

        }
        void sety(int y1)
        {
            y = y1;

        }
        int gety()
        {
            return y;
        }
    private:
        int x;
        int y;
};
class Circle
{
    void setr(int r1)
    {
        rr = r1;
    }
    int getr()
    {
        return rr;
    }
    void setCenter(Point center1)
    {
        center = center1;
    }
    Point getcenter()
    {
        return center;
    }
    private:
        int rr;
        Point center;
};
int main()
{
    Circle c1;
    c1.getcenter().getx
    system("pause");
    return 0;
}