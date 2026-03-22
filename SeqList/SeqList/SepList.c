#include "SepList.h"
void SLInit(SL* ps)
{
	ps->arr = NULL;
	ps->capacity = ps->size = 0;
}

void SLDestroy(SL* ps)
{
	if (ps->arr)
	{
		free(ps->arr);
		ps->arr = NULL;
	}
	ps->capacity = ps->size = 0;
}

void SLPrint(SL ps)
{
	int i = 0;
	for (i = 0; i < ps.size ; i++)
	{
		printf("%d ", ps.arr[i]);
	}
	printf("\n");
}

void SLCheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int Newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType* )realloc(ps->arr, Newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("无法扩展\n");
			exit(1);
		}
		ps->arr = tmp;
		tmp = NULL;
		ps->capacity = Newcapacity;
	}
}

void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);
	ps->arr[ps->size++] = x;
}

void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	assert(ps->size);
	SLCheckCapacity(ps);
	int i = 0;
	for (i = ps->size; i > 0; i--)
	{
		ps->arr[i] = ps->arr[i-1];
	}
	ps->arr[0] = x;
	ps->size++;
}

void SLPopBack(SL* ps)
{
	assert(ps);
	assert(ps->size);
	ps->size--;
}

void SLPopFront(SL* ps)
{
	assert(ps);
	assert(ps->size);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}