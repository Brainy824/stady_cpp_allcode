#include <stdio.h>
#include <windows.h>
void LoveYou(int flag[],int n);
int main()
{
    int flag[5]={2,2,2,4,3};
    LoveYou(flag,3);
    system("pause");
    return 0;
}
void LoveYou(int flag[],int n){
    printf("I Am Iron Man\n");
    for(int i=0;i<n;i++){
        if(flag[i]==n){
            printf("循环了%d\n",i);
            printf("I love you %d次!!!!\n",n);
            break;
        }
        if(i==(n-1)&&flag[i]!=n){
            printf("没有找到就是了\n");
            break;
        }       
    }
    
}