#include "func.h"

int main()
{
	Linklist L;
	L=InitList1(L);
	printf("输入链表数据:\n");
	//L=HeadInsertCreate(L);
	L=TailInsertCreate(L);
	ListPrint1(L);
	return 0;
}
	
