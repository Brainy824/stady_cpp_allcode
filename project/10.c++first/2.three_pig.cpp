#include <iostream>
using namespace std;
int main()
{
    //三只小猪称体重
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    int a = 10;
    int b = 20;
    int c = 0;
    (a < b ? a : b) = 100;
    cout << a << endl;
    //用户输入三只小猪的重量
    cout << "请输入小猪A的体重: " << endl;
    cin >> num1;

    cout << "请输入小猪B的体重: " << endl;
    cin >> num2;

    cout << "请输入小猪C的体重: " << endl;
    cin >> num3;

    cout << "小猪A的体重: " << endl;
    cout << "小猪B的体重: " << endl;
    cout << "小猪C的体重: " << endl;
    //进行判断开始
    if(num1 > num2)
    {
    
        if(num1 > num3)
        {
            cout << "小猪A最重" << endl;
        }
        else
        {
            cout << "小猪C最重" << endl;
        }
    }else
    {
        if(num2 > num3)
        {
            cout << "小猪B最重" << endl;
        }else
        {
            cout << "小猪C最重" << endl;
        }
    }


    system("pause");
    return 0;
}