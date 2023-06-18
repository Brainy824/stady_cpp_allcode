#include <iostream>
using namespace std;
template<class T>
void mySwap(T&a,T&b)
{
    T temp = a;
    a = b;
    b = temp;
}

template<class T>
void mySort(T arr[],int len)
{
    for(int i = 0; i < len; i++)
    {
        int max = i;
        for(int j = i + 1; j < len; j++)
        {
            //认定的最大值 比 遍历出的数值 要下，说明j下标的元素才是真正的最大值
            if(arr[max]<arr[j])
            {
                max = j;//更新
            }
        }
        if(max != i)
        {
            mySwap(arr[max],arr[i]);
        }
    }
}

template<class T>
void printArrar(T arr[],int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test01()
{
    //测试char数组
    char charArr[] = "badcfe";
    int num = sizeof(charArr)/sizeof(char);
    mySort(charArr,num);
    printArrar(charArr,num);
}

void test02()
{
    int intArr[] = {7,5,1,3,9,2,4,6,8};

    int num = sizeof(intArr)/sizeof(int);

    mySort(intArr,num);

    printArrar(intArr,num);

}
int main()
{
    test02();

    system("pause");
    return 0;
}