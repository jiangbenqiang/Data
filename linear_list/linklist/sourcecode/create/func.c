#include "func.h"

Linklist InitList1(Linklist L)
{
	L=(LNode*)malloc(sizeof(LNode));
	if(NULL==L)
	{
		printf("error\n");
		exit(0);
	}
	L->next=NULL;
	return L;
}

Linklist InitList2(Linklist L)
{
	L=NULL;
	return L;
}

void ListPrint1(Linklist L)
{
	if(NULL==L->next)
	{
		printf("empty!\n");
		exit(0);
	}
	while(L->next!=NULL)
	{
		L=L->next;
		printf("%d ",L->data);
	}
	printf("\n");
}

void ListPrint2(Linklist L)
{
	if(NULL==L)
	{
		printf("empty\n");
		exit(0);
	}
	while(L!=NULL)
	{
		printf("%d ",L->data);
		L=L->next;
	}
	printf("\n");
}

Linklist HeadInsertCreate1(Linklist L)
{
	LNode* s;
	Elemtype e;
	while(scanf("%d",&e)!=EOF)
	{
		s=(LNode*)malloc(sizeof(LNode));
		memset(s,0,sizeof(LNode));
		s->data=e;
		s->next=L->next;
		L->next=s;
	}
	return L;
}

Linklist HeadInsertCreate2(Linklist L)
{
	LNode* s;
	Elemtype e;
	while(scanf("%d",&e)!=EOF)
	{
		s=(LNode*)malloc(sizeof(LNode));
		memset(s,0,sizeof(LNode));
		s->data=e;
		s->next=L;
		L=s;
	}
	return L;
}

Linklist TailInsertCreate1(Linklist L)
{
	LNode* s;
	Elemtype e;
	LNode* r=L;
	while(scanf("%d",&e)!=EOF)
	{
		s=(LNode*)malloc(sizeof(LNode));
		memset(s,0,sizeof(LNode));
		s->data=e;
		//s->next=NULL;
		r->next=s;
		r=s;
	}
	s->next=NULL;
	return L;
}

Linklist TailInsertCreate2(Linklist L)
{
	LNode* s;
	Elemtype e;
	LNode* r=L;
	scanf("%d",&e);
	s=(LNode*)malloc(sizeof(LNode));
	memset(s,0,sizeof(LNode));
	s->data=e;
	L=s;
	r=s;
	while(scanf("%d",&e)!=EOF)
	{
		s=(LNode*)malloc(sizeof(LNode));
		memset(s,0,sizeof(LNode));
		s->data=e;
		r->next=s;
		r=s;
	}
	s->next=NULL;
	return L;
}
