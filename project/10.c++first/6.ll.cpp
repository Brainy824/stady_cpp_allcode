#include <iostream>
#include <string>
using namespace std;

void swap(int *p1,int *p2)
{

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    cout << "da = " << *p1 << endl;
    cout << "db = " << *p2 << endl;
}
    //const的使用场景
struct student
{
    string name;
    int age;
    int score;
};
void printStudents(student s)
{
    cout << "xina:" << s.name
    << " :" << s.age << " : " << s.score << endl;

}
int main()
{
    //创建结构体变量
    student s = {"张三",15,70};
    //通过函数来打印结构体的信息
    printStudents(s);

    system("pause");
    return 0;
}