#include <iostream>
#include <string>
using namespace std;
//英雄的结构体
struct Hero
{
    string name;
    int age;
    string sex;
};
void bubbleSort(struct Hero heroArray[],int len)
{
    for(int i = 0; i < len - 1; i++)
    {
        for(int j = 0; j < len - i - 1; j++)
        {
            if(heroArray[j].age > heroArray[j+1].age)
            {
                struct Hero temp = heroArray[j];
                heroArray[j] = heroArray[j+1];
                heroArray[j+1] = temp;
            }
        }
    }
}
int main()
{
    struct Hero heroArray[5] = 
    {
        {"刘备",22,"男"},
        {"g",33,"k"},
        {"f",34,"k"},
        {"g",33,"k"},
        {"f",34,"k"},
    };
    int len = sizeof(heroArray)/sizeof(heroArray[0]);
    for(int i = 0; i < len; i++)
    {
        cout << "姓名: " << heroArray[i].name << "年龄: " << heroArray[i].age 
        << "性别: " << heroArray[i].sex << endl;
    }
    bubbleSort(heroArray,len);
    for(int i = 0; i < len; i++)
    {
        cout << "姓名: " << heroArray[i].name << "年龄: " << heroArray[i].age 
        << "性别: " << heroArray[i].sex << endl;
    }
    system("pause");
    return 0;
}