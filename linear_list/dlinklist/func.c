 ///
 /// @file    func.c
 /// @author  linjia
 /// @date    2020-05-13 10:44:44
 ///

#include "func.h"

bool InitDLinkList(DLinklist &L)
{
	L=(DNode*)malloc(sizeof(DNode));
	if(NULL==L)
	{
		return false;
	}
	L->prior=NULL;
	L->next=NULL;
	return true;
}

bool InsertNextDNode(DNode* p,DNode* s)
{
	if(NULL==p||NULL==s)
	{
		return false;
	}
	s->next=p->next;
	if(p->next!=NULL)
	{
		p->next->prior=s;
	}
	p->next=s;
	s->prior=p;
	return true;
}

bool DeleteNextDNode(DNode* p)
{
	if(NULL==p)
	{
		return false;
	}
	DNode* q=p->next;
	if(NULL==q)
	{
		return false;
	}
	p->next=q->next;
	if(q->next!=NULL)
	{
		q->next->prior=p;
	}
	free(q);
	return true;
}

void DestroyList(DLinklist &L)
{
	while(L->next!=NULL)
	{
		DeleteNextDNode(L);
	}
	free(L);
	L=NULL;
}
