#include "func.h"

int main()
{
	Linklist L;
	//L=InitList1(L);
	//printf("输入链表数据:\n");
	//L=HeadInsertCreate1(L);
	//L=TailInsertCreate1(L);
	//ListPrint1(L);
	L=InitList2(L);
	printf("输入链表数据:\n");
	//L=HeadInsertCreate2(L);
	L=TailInsertCreate2(L);
	ListPrint2(L);
	return 0;
}
	
