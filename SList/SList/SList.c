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

void SLTPopFront(SLTNode** phead)
{
	if ((*phead)->next == NULL)
	{
		free(*phead);
		*phead = NULL;
	}
	else
	{
		SLTNode* ptail = (*phead)->next;
		SLTNode* psev = *phead;
		*phead = ptail;
		free(psev);
		psev = NULL;
	}
}