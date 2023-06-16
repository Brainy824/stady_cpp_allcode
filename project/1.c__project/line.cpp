#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int *array;
    int size;
}Array;
Array array_create(int init_size)
{
    Array a;
    a.array=(int *)malloc(sizeof(int )*a.size);
    a.size=init_size;
    return a;
}
void array_free(Array *a)
{
    free(a->array);
    a->array=NULL;
    a->size=0;
}
int array_size(const Array *a)
{
    return a->size;
}
int *array_at(Array *a,int index)
{
    return &(a->array[index]);
}
int array_get(const Array *a,int index)
{
    return a->array[index];
}
void array_set(Array *a,int index,int value)
{
    a->array[index]=value;
}
void array_inflate(Array *a,int more_size)
{
    int *p=(int *)malloc(sizeof(int)*(a->size + more_size));
    int i;
    for(i=0;i<a->size;i++)
    {
        p[i]=a->array[i];
    }
    free(a->array);
    a->array=p;
    a->size +=more_size;
}
int main(int argc,char const *argv[])
{
    Array a=array_create(100);
    printf("%d\n",array_size(&a));
    *array_at(&a,0)=0;
    printf("%d\n",a.size);
    printf("%d\n",*array_at(&a,0));
    int number;
    int cnt=0;
    while(1){
        // scanf("%d",&number);
        // *array_at(&a,cnt++)=number;
        scanf("%d",array_at(&a,cnt++));
    }
    array_free(&a);

    return 0;
}