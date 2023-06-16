#include <iostream>
using namespace std;
int main()
{
    cout << "请给电影进行打分" << endl;
    int score = 0;
    cin >> score;
    cout << "你打的分数是: " << score << endl;
    switch(score)
    {
        case 10:
            cout << "你认为是经典电影" << endl;
            break;
        case 9:
            cout << "你认为是经典电影" << endl;
            break;
        default:
            cout << "你认为这个是烂片" << endl;
            break;
    }

    system("pause");
    return 0;
}