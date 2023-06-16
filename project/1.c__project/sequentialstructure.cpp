#include <stdio.h>
#define MaxSize 10
typedef struct{
    int data[MaxSize];
    int length;
}SqList;
void ListInsert(SqList &L,int i,int e){
    for(int j=L.length;j>=i;j--)
    L.data[j]=L.data[j-1];
    L.data[i-1]=e;
    L.length++;
}
void InitList(SeqList &L){
    L.data=(int *)malloc(InitSize*sizeof(int));
    L.length=0;
    L.MaxSize=InitSize;
}
int main(void){
    SqList L;
    InitList(L);

    ListInsert(L,3,3);

    return 0;
}