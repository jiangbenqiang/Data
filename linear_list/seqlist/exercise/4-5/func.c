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

//sqlist DeleteAtoBDatas(sqlist L,int a,int b)
//{
//	if(0==L.length)
//	{
//		printf("error\n");
//		exit(0);
//	}
//	if(a>=b)
//	{
//		printf("error\n");
//		exit(0);
//	}
//	int i;
//	int count=0;
//	for(i=0;i<L.length;i++)
//	{
//		if(L.data[i]>=a&&L.data[i]<=b)
//		{
//			L.data[i]=0;
//			count++;
//		}else{
//			L.data[i-count]=L.data[i];
//		}
//	}
//	L.length=L.length-count;
//	return L;
//}

sqlist DeleteStoTDatas(sqlist L,int s,int t)
{
	//printf("s=%d,t=%d\n",s,t);
	if(0==L.length||s>=t)
	{
		printf("error\n");
		exit(0);
	}
	//if(L.data[L.length-1]<s)
	//{
	//	printf("no data is bigger than %d\n",s);
	//	exit(0);
	//}
	if(L.data[0]>t)
	{
		printf("no data is smaller than %d\n",t);
		exit(0);
	}
	int i,j;
	for(i=0;i<L.length&&L.data[i]<s;i++)
	{
		if(i==L.length)
		{
			printf("no data is bigger than %d\n",s);
			exit(0);
		}
	}
	for(j=i;j<L.length&&L.data[j]<t;j++)
	{
		if(j==L.length-1)
		{
			break;
		}
	}
	//i和j用来标示区间
	for(;j<L.length;i++,j++)
	{
		L.data[i]=L.data[j];
	}
	//此时i是新表长
	L.length=i;
	return L;
}

