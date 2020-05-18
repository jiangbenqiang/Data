#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define Elemtype int

typedef struct LNode{
	Elemtype data;
	struct LNode* next;
}LNode,*Linklist;

void ListPrint1(Linklist L);//打印链表,带头节点
void ListPrint2(Linklist L);//打印链表,不带头节点
Linklist InitList1(Linklist L);//带头节点初始化
Linklist InitList2(Linklist L);//不带头节点的初始化
Linklist HeadInsertCreate1(Linklist L);//带头节点头插法建表
Linklist TailInsertCreate1(Linklist L);//带头节点尾插法建表
Linklist HeadInsertCreate2(Linklist L);//不带头节点头插法建表
Linklist TailInsertCreate2(Linklist L);//不带头节点尾插法建表
