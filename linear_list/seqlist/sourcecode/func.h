 ///
 /// @file    func.h
 /// @author  linjia
 /// @date    2020-05-12 15:27:41
 ///

#include <stdio.h>
#include <stdlib.h>

#define Maxsize 10
//#define InitSize 10

typedef struct{
	int data[Maxsize];
	//int* data;
	//int Maxsize;
	int length;
}Sqlist;

void InitList(Sqlist &L);
//void IncreaseSize(Sqlist &L,int len);
bool ListInsert(Sqlist &L,int i,int e);
bool ListDelete(Sqlist &L,int i,int &e);
int GetElem(Sqlist &L,int i);
int LocateElem(Sqlist L,int e);
