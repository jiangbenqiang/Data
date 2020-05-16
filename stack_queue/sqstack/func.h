 ///
 /// @file    func.h
 /// @author  linjia
 /// @date    2020-05-13 21:09:37
 ///

#include <stdio.h>
#include <stdlib.h>

#define MaxSize 10
#define ElemType int

typedef struct{
	ElemType data[MaxSize];
	int top;
}Sqstack;

typedef struct{
	ElemType data[MaxSize];
	int top0;
	int top1;
}ShStack;


void InitStack(Sqstack &S);
bool Push(Sqstack &S, ElemType x);
bool Pop(Sqstack &S,ElemType &x);
bool GetTop(Sqstack &S,ElemType &x);
void InitShStack(ShStack &S);
