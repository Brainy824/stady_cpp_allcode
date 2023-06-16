#include <iostream>
using namespace std;
class Time{
    public:
        int hour;
        int minute;
        int sex;
};
int main()
{
    Time t1;
    cout << "please : ";
    cin >> t1.hour;
    cin >> t1.minute;
    cin >> t1.sex;
    cout << t1.hour << ":" << t1.minute << ":" << t1.sex << endl;
    return 0;
}