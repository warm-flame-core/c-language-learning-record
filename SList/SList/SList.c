#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

void SLTPrint(const SLTNode* phead)
{
	SLTNode* pcur = phead;
	while (pcur)
	{
		printf("%d->", pcur->data);
		pcur = pcur->next;
	}
	printf("NULL\n");
}

SLTNode* SLTBuyNode(SLTDatetype x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("newnode");
		exit(1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

void SLTPushBack(SLTNode** phead, SLTDatetype x)
{
	assert(phead);
	SLTNode* newnode = SLTBuyNode(x);
	if (*phead == NULL)
	{
		*phead = newnode;
	}
	else
	{
		SLTNode* ptail = *phead;
		while (ptail->next)
		{
			ptail = ptail->next;
		}
		ptail->next = newnode;
	}
}

void SLTPushFront(SLTNode** phead, SLTDatetype x)
{
	assert(phead);
	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = *phead;
	*phead = newnode;
}

void SLTPopBack(SLTNode** phead)
{
	assert(phead && *phead);
	SLTNode* ptail = *phead;
	SLTNode* psev = *phead;
	if ((*phead)->next == NULL)
	{
		free(*phead);
		*phead = NULL;
	}
	else
	{
		while (ptail->next)
		{
			psev = ptail;
			ptail = ptail->next;
		}
		free(ptail);
		ptail = NULL;
		psev->next = NULL;
	}
}

void SLTPopFront(SLTNode** pphead)
{
	//一个节点和多个节点的两种情况
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* ptail = (*pphead)->next;
		SLTNode* psev = *pphead;
		*pphead = ptail;
		free(psev);
		psev = NULL;
	}
}

SLTNode* SLTFind(SLTNode* phead, SLTDatetype x)
{
	assert(phead);
	SLTNode* ptail = phead;
	while (ptail)
	{
		if (ptail->data == x)
			return ptail;
		ptail = ptail->next;
	}
	return NULL;
}

void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDatetype x)
{
	if (*pphead == pos)
	{
		SLTPushFront(pphead, x);
	}
	else
	{
		SLTNode* newnode = SLTBuyNode(x);
		SLTNode* ptail = *pphead;
		while (ptail->next != pos)
		{
			ptail = ptail->next;
		}
		newnode->next = pos;
		ptail->next = newnode;
	}
}

void SLTInsertAfter(SLTNode* pos, SLTDatetype x)
{
	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead && *pphead);
	if ((*pphead) == pos)
	{
		SLTPopFront(pphead);
	}
	else
	{
		SLTNode* ptail = *pphead;
		SLTNode* del = pos;
		while (ptail->next != del)
		{
			ptail = ptail->next;
		}
		ptail->next = del->next;
		free(del);
		del = NULL;
	}
}

void SLTEraseAfter(SLTNode* pos)
{
	assert(pos && pos->next);
	SLTNode* del = pos->next;
	//pos del del->next
	pos->next = del->next;
	free(del);
	del = NULL;
}

void SListDesTroy(SLTNode** pphead)
{
	assert(pphead && *pphead);

	SLTNode* pcur = *pphead;
	while (pcur)
	{
		SLTNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	//pcur
	*pphead = NULL;
}