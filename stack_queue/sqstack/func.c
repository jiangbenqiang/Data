 ///
 /// @file    func.c
 /// @author  linjia
 /// @date    2020-05-13 21:17:27
 ///

#include "func.h"

void InitStack(Sqstack &S)
{
	S.top=-1;
}

bool Push(Sqstack &S,ElemType x)
{
	if(MaxSize-1==S.top)
	{
		return false;
	}
	S.top=S.top+1;
	S.data[S.top]=x;
	//S.data[++S.top]=x;
	return true;
}

bool Pop(Sqstack &S,ElemType &x)
{
	if(-1==S.top)
	{
		return false;
	}
	x=S.data[S.top];
	S.top=S.top-1;
	//x=S.data[S.top--];
	return true;
}//数据仍在内存上,逻辑上已经删除

bool GetTop(Sqstack &S,ElemType &x)
{
	if(-1==S.top)
	{
		return false;
	}
	x=S.data[S.top];
	return true;
}

//如果S.top==0;
//bool Push(Sqstack &S,ElemType x)
//{
//	if(MaxSize==S.top)
//	{
//		return false;
//	}
//	S.data[S.top]=x;
//	S.top=S.top+1;
//	//S.data[S.top++]=x;
//	return true;
//}

//如果S.top==0;
//bool Pop(Sqstack &S,ElemType &x)
//{
//   if(0==S.top)
//   {
//   	return false;
//   }
//   S.top=S.top-1;
//   x=S.data[S.top];
//   //x=S.data[--S.top];
//   return true;
//}

void InitShStack(ShStack &S)
{
	S.top0=-1;
	S.top1=MaxSize;
}
