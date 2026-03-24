#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Contact.h"
typedef PenoInfo SLDataType;
#define N 7
//静态顺序表
//struct SepList
//{
//	int arr[7];
//	int size;
//};

//动态顺序表
typedef struct SepList
{
	SLDataType* arr;
	int size;		//有效数据个数
	int capacity;	//空间大小
}SL;

//顺序表的初始化
void SLInit(SL* ps);

//顺序表的销毁
void SLDestroy(SL* ps);

//顺序表的打印
//void SLPrint(const SL* ps);

//顺序表的头插/尾插，x为插入的数据
void SLPushBack(SL* ps, SLDataType x);
void SLPopBack(SL* ps);
void SLPushFront(SL* ps, SLDataType x);
void SLPopFront(SL* ps);

//顺序表的检查与扩容
void SLCheckCapacity(SL* ps);

//顺序表的指定位置之前插入数据
void SLInsert(SL* ps, int pos, SLDataType x);

//顺序表的指定位置删除数据
void SLErase(SL* ps, int pos);

//顺序表的查找数据
//int SLFind(SL* ps, SLDataType x);