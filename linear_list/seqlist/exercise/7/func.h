#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

#define maxsize 10
typedef int elemtype;

typedef struct{
	elemtype data[maxsize];
	int length;
}sqlist;

//void InitList(sqlist L);
sqlist Listcreate(sqlist L);
bool ListInsert(sqlist L,int i,int e);
void Listprint(sqlist L);
sqlist List2to1(sqlist L1,sqlist L2);