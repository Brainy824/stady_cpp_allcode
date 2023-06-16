#include <stdio.h>
#include <stdlib.h>
#define maxsize 100
//定义类型
typedef int datatype;
//顺序表定义
typedef struct{
	int data[maxsize];
	int last;
}seq;
int modeflag=1;
seq *L;
/*************************************/
//建立空顺序表
seq*InitList()
{
	seq*L = (seq*)malloc(sizeof(seq));
	L->last = 0;
	return L;
}
//将新节点插入顺序表的第i个位置
int Insert(seq*L,datatype x,int i)
{
	int j;
	if(L->last >= maxsize - 1)
	{
		printf("表已满");
		return 0;
	}
	else{
		for(j = L->last; j >= i; j--)
			L->data[j+1] = L->data[j];
		L->data[i] = x;
		L->last++;
		return 1;
	}
}
//在顺序表中查找与第一个值相同的元素
int Locata(seq*L,datatype x)
{
	int i = 1;
	while(i <= L->last)
	{
		if(L->data[i] != x)
			i++;
		else
			return i;
	}
	return 0;
}
//输出顺序表
void PrintList(seq*L)
{
	int i;
	for(i = 1; i <= L->last; i++)
	{
		printf("%5d",L->data[i]);
		printf(" ");
	}
	printf("\n");
}
//删除顺序表的第i个结点
int Delete(seq*L,int i)
{
	int j;
	if((i < 1) || (i > L->last))
	{
		printf("非法删除位置");
		return 0;
	}
	else{
		for( j = i; j <= L->last-1;j++)
			L->data[j] = L->data[j+1];
		L->last--;
		return 1;
	}
}
//在顺序表中删除所有值为x相同的元素
void del_node(seq *L,datatype x)
{
	int k;
	k = Locata(L,x);
	while (k)
	{
		if(Delete(L,k) == 0)break;
		k = Locata(L,x);
	}
	
}

/*************************************************/
//初始化界面
void Init_Interface()
{
	int temp;
	printf("按下任意键回车继续\n");
	scanf("%d",&temp);
	system("cls");
}
//数据输入
void Data_Input()
{
	int x,i = 0;
	int temp;
	printf("请输入数据，建立顺序表（输入-1结束）\n");
	scanf("%d",&x);
	while(x!=-1)
	{
		i++;
		if(!Insert(L,x,i))
			exit(0);
		scanf("%d",&x);
	}
	system("cls");
	printf("当前顺序表\n");
	PrintList(L);
	printf("按下任意键加回车继续\n");
	scanf("%d",&temp);
	system("cls");
}
//模式选择
int Mode_Select(void)
{
	int sel = 0;
	printf("0-退出\n");
	printf("1-数据查看\n");
	printf("2-数据查找\n");
	printf("3-数据插入\n");
	printf("4-数据删除\n");
	printf("按下选项加回车继续\n");
	scanf("%d",&sel);
	system("cls");
	return sel;
}
//显示当前顺序表
void Displaying(void)
{
	int temp;
	printf("当前顺序表\n");
	PrintList(L);
	printf("请按下任意键加回车继续\n");
	scanf("%d",&temp);
	system("cls");
}
//数据查找
void Searching(void)
{
	int x,locate;
	int temp;
	printf("请输入要查找的元素值\n");
	scanf("%d",&x);
	printf("\n");
	locate = Locata(L,x);
	if(!locate)
	{
		printf("查找错误\n");
		printf("请按下任意键继续\n");

	}
	else
	{
		printf("查找的元素 %d 位于顺序表中第 %d 位\n",x,locate);
		printf("按下回车键继续\n");
	}
	scanf("%d",&temp);
	system("cls");
}
//数据插入
void Inserting()
{
	int x,locate;
	int temp;
	printf("请输入要插入的元素值:");
	scanf("%d",&x);
	printf("\n");
	printf("请输入你要插入的位置:\n");
	scanf("%d",&locate);
	printf("\n");
	while (!Insert(L, x, locate));1
	
	printf("数据插入成功，当前顺序表数据如下:\n");
	PrintList(L);
	printf("请按下任意按键加回车继续\n");
	scanf("%d",&temp);
	system("cls");
}
//数据删除
void Deleteing()
{
	int mode,x,locate;
	int temp;
	printf("1-按位置删除\n");
	printf("2-按数值删除\n");
	printf("请输入选项加回车继续\n");
	scanf("%d",&mode);
	system("cls");
	switch (mode)
	{
		case 1:
		{
			printf("***************************************************\n");
			printf("   请输入要删除的位置:"); scanf("%d", &locate); printf("\n");
			while (!Delete(L, locate));
			printf("  数据删除成功，当前顺序表数据如下：\n");
			PrintList(L);
			printf("***************************************************\n");
			printf("按下任意数字键加回车以继续......");
			scanf("%d", &temp);
			system("cls");

		}break;

		case 2:
		{
			printf("***************************************************\n");
			printf("   请输入要删除的数值:"); scanf("%d", &x); printf("\n");
			del_node(L, x);
			printf("  数据删除成功，当前顺序表数据如下：\n");
			PrintList(L);
			printf("***************************************************\n");
			printf("按下任意数字键加回车以继续......");
			scanf("%d", &temp);
			system("cls");
		}break;

	}
}

/**********************************************/
int main()
{
	int i = 0;
	datatype x;
	L = InitList();
	Init_Interface();
	Data_Input();
	while(modeflag)
	{
		modeflag = Mode_Select();
		switch(modeflag)
		{
			case 1:Displaying();break;
			case 2:Searching();break;
			case 3:Inserting();break;
			case 4:Deleteing();break;
			case 0:break;
		}
	}
}