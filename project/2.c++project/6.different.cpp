#include <iostream>
using namespace std;
float a = 13.5;
int main()
{
    int a = 5;
    cout << a << endl << ::a << endl;
    return 0;
}