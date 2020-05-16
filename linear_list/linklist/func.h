 ///
 /// @file    func.h
 /// @author  linjia
 /// @date    2020-05-12 21:23:35
 ///

#include <stdio.h>
#include <stdlib.h>

#define ElemType int

typedef struct LNode{
	ElemType data;
	struct LNode* next;
}LNode,*LinkList;

bool InitList(LinkList &L);//初始化
LNode* GetElem(LinkList L,int i);//按位查找,返回第i个元素
bool ListInsert(LinkList &L,int i,ElemType e);//带头结点按位序插入
bool InsertNextNode(LNode* p,ElemType e);//在p节点之后插入e
bool InsertPriorNode(LNode* p,ElemType e);//在p节点之前插入e
bool ListDelete(LinkList &L,int i,ElemType &e);//按位删除
bool DeleteNode(LNode* p);//删除指定节点(不可以是最后节点)
LNode* LocateElem(LinkList L,ElemType e);//按值查找数据域为e的节点
int length(LinkList L);//求表长
LinkList List_TailInsert(LinkList &L);//尾插法建表，正向
LinkList List_HeadInsert(LinkList &L);//头插法建表，反向
