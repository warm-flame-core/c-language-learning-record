#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	//malloc函数申请内存空间
	int* p = (int*)malloc(10 * sizeof(int));
	
	int i = 0;
	if (p != NULL)
	{
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i + 1;
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	//free函数释放内存空间
	free(p);
	return 0;
}