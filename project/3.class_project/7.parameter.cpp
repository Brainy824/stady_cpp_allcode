//这个程序没有函数的重载，要想有一个重载可以参考下一个plus程序

#include <iostream>
using namespace std;
class Box{
    public:
        Box(int,int,int);
        int volume();
    private:
        int height;
        int width;
        int length;
};
Box::Box(int h,int w,int len):height(h),width(w),length(len){}
/* {
    height = h;
    width = w;
    length = len;
} */

int Box::volume()
{
    return (height * width *length);
}
int main()
{

    Box box1(22,22,63);
    cout << "The volume of box1 is " << box1.volume() << endl;
    Box box2(15,30,21);
    cout << "The volume of box2 is " << box2.volume() << endl;
    return 0;
}