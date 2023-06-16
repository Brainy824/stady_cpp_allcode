#include <fstream>
#include <ostream>
#include <iostream>
using namespace std;
struct student{
    char name[20];
    int num;
    int age;
    char sex;
};
int main()
{
    student stud[3] = {"li",1001,18,'f',"fan",1002,19,'m',"wang",1004,17,'f'};
    ostream outfile("stud.dat",ios::binary);
    if(!outfile)
    {
        cerr << "open error!" << endl;
        abort();
    }
    for(int i = 0;i < 3; i++)
    {
        outfile.write((char*)&stud[i],sizeof(stud[i]));

    }
    outfile.close();
    return 0;
}