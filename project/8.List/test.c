#include <iostream>
using namespace std;
int main()
{
    int i;
    int *s;
    s = {"a","b","c","d","e","f","g"};
    int hash[120] = {0};
    for(int i = 0; i< 4; i++)
    {
        cout << "output " << hash[s[i]]++ << endl;;     
    }

    system("pause");
    return 0;
}