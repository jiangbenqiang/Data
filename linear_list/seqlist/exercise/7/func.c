 ///
 /// @file    func.c
 /// @author  linjia
 /// @date    2020-05-15 16:31:56
 ///

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

sqlist List2to1(sqlist L1,sqlist L2)
{
	sqlist L;
	int i,j;
	int k;
	if(L1.length+L2.length>maxsize)
	{
		printf("error\n");
		exit(0);
	}
	if(L1.data[0]>L2.data[L2.length-1])
	{
		for(i=0;i<L2.length;i++)
		{
			L.data[i]=L2.data[i];
		}
		for(i=L2.length,j=0;j<L1.length;j++,i++)
		{
			L.data[i]=L1.data[j];
		}
		L.length=L1.length+L2.length;
		return L;
	}
	if(L1.data[L1.length-1]<L2.data[0])
	{
		for(i=0;i<L1.length;i++)
		{
			L.data[i]=L1.data[i];
		}
		for(i=L1.length,j=0;j<L2.length;i++,j++)
		{
			L.data[i]=L2.data[j];
		}
		L.length=L1.length+L2.length;
		return L;
	}else{
		i=0;
		j=0;
		k=0;
		while(i<L1.length&&j<L2.length)
		{
			if(L1.data[i]<L2.data[j])
			{
				L.data[k]=L1.data[i];
				k++;
				i++;
			}else{
				L.data[k]=L2.data[j];
				k++;
				j++;
			}
		}
		while(i<L1.length)
		{
			L.data[k]=L1.data[i];
			k++;
			i++;
		}
		while(j<L2.length)
		{
			L.data[k]=L2.data[j];
			k++;
			j++;
		}
		L.length=k;
		return L;
	}
}

