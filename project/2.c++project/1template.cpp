#include <iostream>
using namespace std;
template <typename T>
T max(T a,T b,T c)
{
    if(b > a) a = b;
    if(c > a) a = c;
    return a;
}
int main()
{
    int i1 = 8,i2 = 5,i3 = 6,i;
    double d1 = 56.9,d2 = 90.66,d3 = 6554.4,d;
    long g1 = 32232,g2 = 2423332,g3 = 23423,g;
    i = max(i1,i2,i3);
    d = max(d1,d2,d3);
    g = max(g1,g2,g3);
    cout << "i_max = "<<i<<endl;
    cout << "f_max = " << d << endl;
    cout << "g_max = " << g << endl;

    return 0;
}