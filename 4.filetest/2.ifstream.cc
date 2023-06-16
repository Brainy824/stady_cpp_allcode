#include <iostream>
#include <fstream>
using namespace std;

void test01()
{

    //创建流对象
    ifstream ifs;
    //打开文件 并且判断是否打开成
    ifs.open("test.txt",ios::in);
    
    if(!ifs.is_open()) //(如果没有打开成功)    //如果打开成功 返回真 打开失败返回假
    {
        cout << "文件打开失败" << endl;
        return;
    }
    //读数据
    //第一种
    // char buf[1024] = {0};
    // while(ifs >> buf)
    // {
    //     cout << buf << endl;
    // }

    //第二种
    // char buf[1024] = {0};
    // while (ifs.getline(buf,sizeof(buf)))
    // {
    //     cout << buf << endl;
    // }

    //第三种
    // string buf;

    // while(getline(ifs,buf))
    // {
    //     cout << buf << endl;
    // }

    //第四种
    char c;
    while( (c = ifs.get())!= EOF) //EOF 文件尾
    {
        cout << c;
    }

    ifs.close();
}
int main()
{

    test01();
    
    system("pause");
    return 0;

}