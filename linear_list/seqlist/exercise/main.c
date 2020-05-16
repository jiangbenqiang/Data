 ///
 /// @file    1.c
 /// @author  linjia
 /// @date    2020-05-15 16:03:57
 ///

#include "func.h"

int main()
{
	sqlist L;
	//InitList(L);
	for(int i=0;i<L.length;i++)
	{
		L.data[i]=0;
	}
	L.length=0;
	//Listcreate(L);
	elemtype e;
	while(scanf("%d",&e)!=EOF)
	{
		L.data[L.length]=e;
		L.length++;
	}
	Listprint (L);
	return 0;
}
	
