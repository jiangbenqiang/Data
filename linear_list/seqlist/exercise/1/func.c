#include "func.h"

//void InitList(sqlist L)
//{
//	for(int i=0;i<L.length;i++)
//	{
//		L.data[i]=0;
//	}
//	L.length=0;
//}

sqlist Listcreate(sqlist L)
{
	elemtype e;
	while(scanf("%d",&e)!=EOF)
	{
		L.data[L.length]=e;
		L.length++;
	}
	return L;
}

bool ListInsert(sqlist L,int i,int e)
{
	if(i<1||i>L.length+1)
	{
		return false;
	}
	if(L.length>maxsize)
	{
		return false;
	}
	for(int j=L.length;j>=i;j--)
	{
		L.data[j]=L.data[j-1];
	}
	L.data[i-1]=e;
	L.length++;
	return true;
}

void Listprint(sqlist L)
{
	for(int i=0;i<L.length;i++)
	{
		printf("%d ",L.data[i]);
	}
	printf("\n");
}

int Findmin(sqlist L)
{
	if(0==L.length)
	{
		printf("SeqList is empty!\n");
		return -1;
	}
	int i,pos;
	elemtype* min=L.data;
	//L.length==1
	for(i=0;i<L.length;i++)
	{
		if(L.data[i]<*min)
		{
			//min=&L.data[i];
			min=min+i;
			pos=i;
		}
	}
	elemtype e=*min;
	L.data[pos]=L.data[L.length-1];
	Listprint(L);
	return e;
}

