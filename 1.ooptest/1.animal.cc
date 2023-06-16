#include <iostream>
using namespace std;
class BasePage
{
public:
    void header()
    {
        cout << "首页、公开课、登录、注册.....(公共头部)" << endl;

    }
    void footer()
    {
        cout << "帮助中心、交流合作、站内地图....(公共底部)" << endl;

    }
    void left()
    {
        cout << "Java、Python、c++、....(公共分类列表)" << endl;
    }

};
//java
class Java:public BasePage
{
public:
    void content()
    {
        cout << "Java学科视频" << endl;
    }
};
class Python:public BasePage
{
public:
    void content()
    {
        cout << "Python学科视频" << endl;
    }
};
class Cpp:public BasePage
{
public:
    void content()
    {
        cout << "Cpp学科视频" << endl;
    }
};
void test01()
{
    cout << "Java下载视频页面如下: " << endl;
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();
    Cpp cc;
    cc.header();
    cc.footer();
    cc.left();
    cc.content();
    Python pp;
    pp.header();
    pp.footer();
    pp.left();
    pp.content();
}

int main()
{
    test01();
    system("pause");
    return 0; 
}