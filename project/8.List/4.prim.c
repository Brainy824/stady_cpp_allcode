#include <stdio.h>
typedef struct node{
    int data;
    struct node* next;
}linklist;
linklist* createListF()
{
    linklist *head,*p;
    int ch;
    head = (linklist*)malloc(sizeof(linklist));
    head->next = NULL;
    scanf("%d",&ch);
    while(ch != -1)
    {
        p = (linklist*)malloc(sizeof(linklist));
        p->data = ch;
        p->next = head->next;
        head->next = p;
        scanf("%d",&ch);
    }
    return head;
}
linklist* createlistR()
{
    linklist *head,*p,*r;
    char ch;
    head = (linklist*)malloc(sizeof(linklist));
    head->next = NULL;
    r = head;
    scanf("%d",&ch);
    while(ch != -1)
    {
        p = (linklist*)malloc(sizeof(linklist));
        p->data = ch;
        r->next = p;
        r = p;
        scanf("%d",&ch);

    }
    r->next = NULL;
    return head;
}
linklist * get(linklist*head,int i)
{
    linklist*p = head;
    int j= 0;
    while(p->next != NULL && j < i)
    {
        p = p->next;
        j++;
    }
    if( i == j)
    {
        return p;
    }
    else
    {
        return NULL;
    }
}
linklist *locate(linklist*head,int x)
{
    linklist*p = head->next;
    while(p != NULL && p->data != x)
    {
        p = p->next;
    }
    if( p == NULL)
    {
        return NULL;

    }
    else{
        return p;
    }
}
void insert(linklist*L,int x,int i)
{
    linklist *p,*s;
    p = get(L,i-1);
    if(p == NULL)printf("查找不到第i-1个结点\n");
    else{
        s = (linklist*)malloc(sizeof(linklist));
        s->data = x;
        s->next = p->next;
        p->next = s;
    }
}
void Delete(linklist*L,int i)
{
    linklist *r,*p;
    r = (linklist*)malloc(sizeof(linklist));
    p = get(L,i-1);
    if(p != NULL && p->next != NULL)
    {
        r = p->next;
        p->next = r->next;
        free(r);
    }
    else printf("第i个结点不存在\n");
}
void Delete(linklist*L, int x)
{
    linklist*r,*p;
    r = (linklist*)malloc(sizeof(linklist));
    p = locate(L,x);
    if(p != NULL && p->next != NULL)
    {
        r = p->next;
        p->next = r->next;
        free(r);

    }
    else printf("值为x的结点不存在");
}
void show_link(linklist*L)
{
    linklist*p = L->next;
    printf("单链表为: \n");
    while(p != NULL)
    {
        printf("%d\t",p->data);
        p = p->next;
    }
    printf("\n");
}