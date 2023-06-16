#include <stdio.h>

class Point{
    public:
        void init(int x,int y);
        void print() const;
        void move(int dx,int dy);
    private:
        int x;
        int y;

};
int main()
{
    Point a;
    a.init(1,3);
    a.move(2,2);
    a.print();

    return 0;
}