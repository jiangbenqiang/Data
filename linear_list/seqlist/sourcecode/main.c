 ///
 /// @file    main.c
 /// @author  linjia
 /// @date    2020-05-12 15:36:25
 ///

#include "func.h"

int main()
{
	Sqlist L;
	InitList(L);
	//IncreaseSize(L,5);
	//...
	ListInsert(L,3,3);
	int e=-1;
	if(ListDelete(L,3,&e))
	{
		printf("已删除，返回值e=%d\n",e);
	}
	else{
		printf("删除失败\n");
	}
	return 0;
}
