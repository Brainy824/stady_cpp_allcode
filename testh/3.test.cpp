#include <iostream>
using namespace std;
class printDate
{
    public:
        void print(int i){
            cout << "整数为: " << i << endl;
        }
        void print(double f){
            cout << "浮点数为: " << f << endl;
        }
        void print(char c[])
        {
            cout << "字符串: " << c << endl;
        }

};
int main()
{
    printDate pd;
    pd.print(3);
    pd.print(34.32);
    char c[] = "hello world";
    pd.print(c);
    system("pause");
    return 0;
}