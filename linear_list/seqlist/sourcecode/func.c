 ///
 /// @file    func.c
 /// @author  linjia
 /// @date    2020-05-12 15:32:35
 ///

#include "func.h"

void InitList(Sqlist &L)
{
	for(int i=0;i<Maxsize;i++)
	{
		L.data[i]=0;
	}
	L.length=0;
}
//void InitList(Sqlist &L)
//{
//	L.data=(int*)malloc(InitSize*sizeof(int));
//	L.length=0;
//	L.Maxsize=InitSize;
//}

//void IncreaseSize(Sqlist &L,int len)
//{
//	int* p=L.data;
//	L.data=(int*)malloc((L.Maxsize+len)*sizeof(int));
//	for(int i=0;i<L.length;i++)
//	{
//		L.data[i]=p[i];
//	}
//	L.Maxsize=L.Maxsize+len;
//	free(p);
//}

bool ListInsert(Sqlist &L,int i,int e)
{
	if(i<1||i>L.length+1)
	{
		return false;
	}
	if(L.length>=Maxsize)
	{
		return false;
	}
	for(int j=L.length;j>=i;j--)
	{
		L.data[j]=L.data[j-1];//后移
	}
	L.data[i-1]=e;
	L.length++;
	return true;
}

bool ListDelete(Sqlist &L,int i,int &e)
{
	if(i<1||i>L.length)
	{
		return false;
	}
	e=L.data[i-1];
	for(int j=i;j<L.length;j++)
	{
		L.data[j-1]=L.data[j];//前移
	}
	L.length--;
	return true;
}

int GetElem(Sqlist &L,int i)
{
	int* p=L.data;
	return (int)p[i-1];
}

int LocateElem(Sqlist L,int e)
{
	for(int i=0;i<L.length;i++)
	{
		if(e==L.data[i])
		{
			return i+1;
		}
	}
	return 0;
}
