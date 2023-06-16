#include <iostream>
using namespace std;
class Point{
    Point(){}
   ~ Point(){cout << "executing Point destructor" << endl;}
};
class Circle:public Point{
    public:
        Circle(){}
        ~ Circle(){cout << "executing circle desturctor" << endl;}
    private:
        int radus;
};
int main()
{
    Point *p = new Circle;
    delete p;


    return 0;
}