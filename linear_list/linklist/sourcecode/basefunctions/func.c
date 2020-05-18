 ///
 /// @file    func.c
 /// @author  linjia
 /// @date    2020-05-12 21:32:30
 ///

#include "func.h"

bool InitList(LinkList &L)
{
	L=(LNode*)malloc(sizeof(LNode));
	if(NULL==L)
	{
		return false;
	}
	L->next=NULL;
	return true;
}

bool InsertNextNode(LNode* p,ElemType e)
{
	if(NULL==p)
	{
		return false;
	}
	LNode* s=(LNode*)malloc(sizeof(LNode));
	if(NULL==s)
	{
		return false;
	}
	s->data=e;
	s->next=p->next;
	p->next=s; 
	return true;
}

bool ListInsert(LinkList &L,int i,ElemType e)//在第i个位置插入元素e
{
	if(i<1)
	{
		return false;
	}
	//LNode* p;
	//int j=0;
	//p=L;
	//while(p!=NULL&&j<i-1)
	//{
	//	p=p->next;
	//	j++;
	//}
	LNode* p= GetElem(L,i-1);//找到i-1的位置
	//if(NULL==p)
	//{
	//	return false;
	//}
	//LNode* s=(LNode*)malloc(sizeof(LNode));
	//s->data=e;
	//s->next=p->next;
	//p->next=s;
	//return true;
	return InsertNextNode(p,e);//在p后即第i个位置插入新元素e
}

bool InsertPriorNode(LNode* p,ElemType e)
{
	if(NULL==p)
	{
		return false;
	}
	LNode* s=(LNode*)malloc(sizeof(LNode));
	if(NULL==s)
	{
		return false;
	}
	ElemType temp=p->data;
	p->data=e;
	s->data=temp;
	s->next=p->next;
	p->next=s;
	return true;
}

bool ListDelete(LinkList &L,int i,ElemType &e)
{
	if(i<1)
	{
		return false;
	}
	//LNode* p;
	//int j=0;
	//p=L;
	//while(p!=NULL&&j<i-1)//找第i-1个节点
	//{
	//	p=p->next;
	//	j++;
	//}
	LNode* p=GetElem(L,i-1);
	if(NULL==p)
	{
		return false;
	}
	LNode* q=p->next;//令q指向节点i
	e=q->data;
	p->next=q->next;
	free(q);
	return true;
}

bool DeleteNode(LNode* p)
{
	if(NULL==p)
	{
		return false;
	}
	LNode* q=p->next;
	p->data=p->next->data;
	p->next=q->next;
	free(q);
	return true;
}

LNode* GetElem(LinkList L,int i)
{
	if(i<0)
	{
		return NULL;
	}
	LNode* p;
	int j=0;
	p=L;
	while(p!=NULL&&j<i)
	{
		p=p->next;
		j++;
	}
	return p;
}

LNode* LocateElem(LinkList L,ElemType e)
{
	LNode* p=L->next;//从第一个节点开始查找
	while(p!=NULL&&p->data!=e)
	{
		p=p->next;
	}
	return p;
}

int length(LinkList L)
{
	int len=0;
	LNode* p=L;
	while(p->next!=NULL)
	{
		p=p->next;
		len++;
	}
	return len;
}

LinkList List_TailInsert(LinkList &L)
{
	int x;
	L=(LinkList)malloc(sizeof(LNode));
	L->next=NULL;
	LNode* s=L;
	LNode* r=L;//r为尾指针
	scanf("%d",&x);
	while(x!=9999)//输入9999表示结束
	{
		s=(LNode*)malloc(sizeof(LNode));
		s->data=x;
		r->next=s;
		r=s;
		scanf("%d",&x);
	}
	r->next=NULL;
	return L;
}

LinkList List_HeadInsert(LinkList &L)
{
	LNode* s;//s始终指向头节点的next节点
	int x;
	L=(LinkList)malloc(sizeof(LNode));
	L->next=NULL;
	scanf("%d",&x);
	while(x!=9999)
	{
		s=(LNode*)malloc(sizeof(LNode));
		s->data=x;
		s->next=L->next;
		L->next=s;
		scanf("%d",&x);
	}
	return L;
}
