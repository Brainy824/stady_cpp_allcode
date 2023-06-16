#include <iostream>
using namespace std;
class Shape
{
    public:
        void setWidth(int w)
        {
            width = w;
        }
        void setHeigth(int h)
        {
            heigh = h;
        }
    protected:
        int width;
        int heigh;
};
class PaintCost
{
    public:
        int getCost(int area)
        {
            return area * 70;
        }
};

class Rectangle: public Shape,public PaintCost
{
    public:
        int getArea()
        {
            return (width * heigh);
        }
};
int main()
{
    int area;
    Rectangle Rect;
    Rect.setHeigth(7);
    Rect.setWidth(5);
    area = Rect.getArea();

    cout << "area : " << Rect.getArea() << endl;
    cout << "paint cost : " << Rect.getCost(area) << endl;
    system("pause");
    return 0;

}