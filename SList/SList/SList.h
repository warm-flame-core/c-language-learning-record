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