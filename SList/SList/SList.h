#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDatetype;

typedef struct SListNode
{
	SLTDatetype data;
	struct SListNode* next;
}SLTNode;

//链表的打印
void SLTPrint(SLTNode* phead);

//链表的尾插
void SLTPushBack(SLTNode** phead, SLTDatetype x);

//链表的头插
void SLTPushFront(SLTNode** phead, SLTDatetype x);

//链表的尾删
void SLTPopBack(SLTNode** phead);

//链表的头删
void SLTPopFront(SLTNode** phead);

//查找
SLTNode* SLTFind(SLTNode* phead, SLTDatetype x);

//在指定位置之前插入数据
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDatetype x);
//在指定位置之后插入数据
void SLTInsertAfter(SLTNode* pos, SLTDatetype x);

//删除pos节点
void SLTErase(SLTNode** pphead, SLTNode* pos);
//删除pos之后的节点
void SLTEraseAfter(SLTNode* pos);

//销毁链表
void SListDesTroy(SLTNode** pphead);