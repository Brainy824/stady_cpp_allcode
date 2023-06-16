#include <iostream>
#include <string>
#include <string.h>

using namespace std;
class String{
    public:
        String(){p = NULL;}
        String(char *str);
        friend bool operator > (String &string1,String &string2);

        void display();
    private:
        char *p;

};
String::String(char *str)
{
    p = str;
}
void String::display()
{
    cout << p;
}
bool operator > (String &string1,String &string2)
{
    if(strcmp(string1.p,string2.p) > 0)
        return true;
    else return false;
}
int main()
{
    String string1("hello"),string2("bool");
    cout << (string1 > string2) << endl;
    return 0;
}
