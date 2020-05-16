 ///
 /// @file    func.h
 /// @author  linjia
 /// @date    2020-05-13 10:44:54
 ///

#include <stdio.h>
#include <stdlib.h>

#define ElemType int

typedef struct DNode{
	ElemType data;
	struct DNode *prior,*next;
}DNode,*DLinklist;

bool InitDLinkList(DLinklist &L);//初始化双链表
bool InsertNextDNode(DNode* p,DNode* s);//在p节点之后插入s节点
bool DeleteNextDNode(DNode* p);//删除p节点的后继节点
void DestroyList(DLinklist &L);//销毁链表

