#include <stdio.h>
#include <stdlib.h>

typedef int datatype;
typedef struct node
{
    datatype data;
    struct node*next;    
}linklist;
linklist *head,*p;//head为头指针，p为工作指针

int flag_1 = 1;
int flag_2 = 1;
int flag_3 = 1;
//头插法建立单链表，返回单链表的头指针
linklist*CreateListF()
{
    linklist*head,*p;
    int ch;
    head = (linklist*)malloc(sizeof(linklist));//产生头节点
    if(head == NULL)
    {
        printf("head结点动态分配内存失败\n");
        return NULL;
    }
    else
    {
        head->next = NULL;
        printf("头插法建立链表:请输入记录(以-1结束)\n");
        scanf("%d",&ch);
        while(ch != -1)
        {
            p = (linklist*)malloc(sizeof(linklist));
            p->data = ch;
            p->next = head->next;
            scanf("%d",&ch);
        }
        return head;
    }
}
//尾插法建立单链表，返回单链表的头指针
linklist*CraeatListR()
{
    datatype dat;
    linklist *head,*p,*r;
    head = (linklist*)malloc(sizeof(linklist));
    if(head == NULL)
    {
        printf("head结点动态分配内存失败\n");
        return NULL;
    }
    else
    {
        head->next = NULL;
        r = head;
        printf("尾插法建立单链表: 请输入记录(以-1结束)");
        scanf("%d",&dat);
        while (dat != -1)
        {
            p = (linklist*)malloc(sizeof(linklist));
            if(p == NULL)
            {
                printf("结点动态分配内存失败");
                return NULL;
            }
            else
            {
                p->data = dat;
                p->next = NULL;
                r->next = p;
                scanf("%d",&dat);

            }
        }
        return head; 
    }
}
//按序号查找
linklist*Get(linklist*head,int i)
{
    linklist*p = head;
    int j = 0;
    while (p->next != NULL && j < i)
    {
        p = p->next;
        j++;
    }
    if(i==j)
    {
        printf("第 %d 个结点的值为 %d \n",i,p->data);
        return p;

    }
    else
    {
        printf("按序号为 %d 的结点不存在\n",i);
        return NULL;

    }
    
}
//按值查找
linklist*Locate(linklist*head,datatype key)
{
    int j = 1;
    linklist *p = head->next;
    while (p != NULL && p->data != key)
    {
        p = p.next;
        j++;
    }
    if(p->data == key)
    {
        printf("值为 %d 的结点位于第 %d 位\n",key,j);
        return p;
    }
    else 
    {
        printf("值为 %d 的结点不存在\n",key);
        return NULL;
    }

}
//单链表插入
void Insert(linklist*L,datatype x,int i)
{
    linklist *p,*s;
    p = Get(L,i-1);
    if(p == NULL)printf("查找不到第 i-1 个结点");
    else{
        s = (linklist*)malloc(sizeof(linklist));
        s ->data = x;
        s->next = p->next;
        p->next = s;
    }
}
//将值为x的新节点插入到带有头节点的有序单链表中
void Insert(linklist*head,datatype x)
{
    linklist *p,*s,*q;
    s = (linklist*)malloc(sizeof(linklist));
    s->data = x;
    p = head->next;
    q = head;
    while(p != NULL && x >= p->data)
    {
        q = p;
        p = p->next;

    }
    if(p == NULL)q->next = s;
    else{
        s->next = p;
        q->next = s;
    }
}
//打印单链表
void show_link(linklist*L)
{
    linklist*p = L->next;
    printf("单链表为:\n");
    while(p != NULL)
    {
        printf("%d\t",p->data);
        p = p->next;
    }
    printf("\n");
}
int main()
{
    int choose,key;
    linklist*L;
    while(flag_3)
    {
        while(flag_1)
        {
            printf("0-头插法建表  1-尾插法建表  2-建表结束\n");
            printf("请输入选项:");
            scanf("%d",&choose);
            switch(choose)
            {
                case 0: L = CreateListF();show_link(L);break;
            }
        }
    }
}


