#include "func.h"

int main()
{
	sqlist L1;
	//InitList(L);
	for(int i=0;i<L1.length;i++)
	{
		L1.data[i]=0;
	}
	L1.length=0;
	printf("输入顺序表L1数据,数据个数不超过%d:\n",maxsize);
	L1=Listcreate(L1);
	Listprint(L1);
	sqlist L2;
	//InitList(L);
	for(int i=0;i<L2.length;i++)
	{
		L2.data[i]=0;
	}
	L2.length=0;
	printf("输入顺序表L2数据,数据个数不超过%d:\n",maxsize);
	L2=Listcreate(L2);
	Listprint(L2);
	sqlist L;
	for(int i=0;i<L.length;i++)
	{
		L.length=0;
	}
	L.length=0;
	L=List2to1(L1,L2);
	Listprint(L);
	return 0;
}
	
