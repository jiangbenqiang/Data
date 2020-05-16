 ///
 /// @file    func.c
 /// @author  linjia
 /// @date    2020-05-15 16:31:56
 ///

#include "func.h"

void InitList(sqlist L)
{
	for(int i=0;i<L.length;i++)
	{
		L.data[i]=0;
	}
	L.length=0;
}

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
