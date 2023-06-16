#include <iostream>
using namespace std;
class Student{
    public:
       inline void display();
   /*      {
            cout << "num: " << num << endl;
            cout << "name: " << name << endl;
            cout << "sex: " << sex << endl;
        } */
    private:
        int num;
        int name[20];
        char sex;
}stud1,stud2;
inline void Student::display()
{
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;

}
int main()
{
    stud1.display();
    return 0;
}