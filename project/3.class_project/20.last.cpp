#include <iostream>
using namespace std;
template <class  numtype>
class Compare{
    public:
        Compare (numtype a,numtype b)
        {x = a;y = b;}
        numtype max()
        {return (x > y)?x:y;}
        numtype min()
        {return (x < y)?x:y;}
    private:
        numtype x,y;
};
int main()
{
    Compare <int> cmp1(3,7);
    cout << cmp1.max() << "is the maximum of two integer numbers." << endl;
    cout << cmp1.min() << "is the minmun of two integer numbers." << endl << endl;
    Compare <float> cmp2(45.78,93.6);
    cout << cmp2.max() << "is the maximum of two float number." << endl;
    cout  << cmp2.min() << "is the minmum of two float numver." << endl << endl;
    Compare <char> cmp3('a','A');
    cout << cmp3.max() << "is the maximum of two characters." << endl;
    cout << cmp3.min() << "is the minimun of two characters." << endl << endl;
    return 0;
}