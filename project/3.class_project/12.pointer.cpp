//对象指针
#include <iostream>
using namespace std;
class Time{
    public:
        int hour;
        int minute;
        int sec;
        void get_time();
};
void Time::get_time()
{
    cout << hour << ":" << minute << ":" << sec << endl;
}
int main()
{
    Time *pt;
    Time t1;
    pt = &t1;
}