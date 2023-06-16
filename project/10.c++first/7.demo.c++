#include <iostream>
#include <string>
#include <ctime> 
using namespace std;
struct Student 
{
    string sName;
    int score;
};
struct Teacher
{
    string tName;
    struct Student sArray[5];

};
void allocateSpace(struct Teacher tArray[],int len)
{
    string nameSeed = "ABCD";
    for(int i = 0;i < len; i++)
    {
        tArray[i].tName = "Teacher";
        tArray[i].tName += nameSeed[i];

        for(int j = 0; j < 5; j++)
        {
            tArray[i].sArray[j].sName = "Student";
            tArray[i].sArray[j].sName += nameSeed[j];

            tArray[i].sArray[j].score = 60;
        }

    }

}
void printInfo(struct Teacher tArray[],int len)
{
    for(int i = 0;i < len; i++)
    {
        cout << "老师姓名: " << tArray[i].tName << endl;
        for(int j = 0; j<5; j++)
        {
            cout << "学生姓名: " << tArray[i].sArray[j].sName << 
            "考试分数: " << tArray[i].sArray[j].score << endl;

        }
    }
}
int main()
{
    //随机数种子
    //srand((unsigned int)time(NULL))
    struct Teacher tArray[3];
    int len = sizeof(tArray)/sizeof(tArray[0]);
    allocateSpace(tArray,len);

    printInfo(tArray,len);
    system("pause");
    return 0;
}