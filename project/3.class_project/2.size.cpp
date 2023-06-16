#include <iostream>
using namespace std;
class Time{
    public:
        int hour;
        int minute;
        int sec;
        void set()
        {
            int a,b,c;
            cin >> a >> b >> c;
        }
};
int main()
{

    cout << sizeof(Time) << endl;

    return 0;
}