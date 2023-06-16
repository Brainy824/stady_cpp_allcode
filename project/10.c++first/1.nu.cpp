#include <iostream>
#include <string>
using namespace std;
#define Day 7   
int main()
{
    int score = 0;
    cout << "请输入一个考试分数: " << endl;
    while(cin >> score)
    {
        //cout << "请输入一个考试分数: " << endl;
      //  cin >> score;
        cout << "您输入的分数是: " << score << endl;
        if(score > 600)
        {
            cout << "恭喜你考上了一本大学" << endl;
        }
        else
        {
            cout << "没有考上一本大学" << endl;
        }
        cout << "请输入一个考试分数: " << endl;
    }

    system("pause");
    return 0;
}