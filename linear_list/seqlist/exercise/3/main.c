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
	printf("输入顺序表数据,数据个数不超过%d:\n",maxsize);
	L=Listcreate(L);
	//Listprint (L);
	int x;
	printf("输入想删除的数据:\n");
	scanf("%d",&x);
	L=DleteTheData(L,x);
	Listprint(L);
	return 0;
}
	
