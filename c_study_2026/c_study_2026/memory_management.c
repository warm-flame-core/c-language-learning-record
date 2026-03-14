#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	//malloc函数申请内存空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	
//	int i = 0;
//	if (p != NULL)
//	{
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i + 1;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//free函数释放内存空间
//	free(p);
//	p = NULL;
//	return 0;
//}


//calloc函数申请内存空间,会自动初始化为0
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (NULL != p)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i + 1;
//		}
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//free函数释放空间
//	free(p);
//	p = NULL;
//	return 0;
//}


//realloc函数调整内存大小
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (NULL != p)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i + 1;
//		}
//	}
//	//用realloc函数调整大小
//	int* ptr = (int*)realloc(p, sizeof(int) * 15);
//	if (ptr != NULL)
//		p = ptr;
//	else
//		return 1;
//	//使用
//	//。。。。。
//
//	//free释放内存
//	free(p);
//	p = NULL;
//	return 0;
//}


//柔性数组
//struct S
//{
//	int n;
//	int arr[0];
//};
//int main()
//{
//	int i = 0;
//	struct S* p = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	if (p != NULL)
//	{
//		p->n = 100;
//		for (i = 0; i < 10; i++)
//		{
//			p->arr[i] = i;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//struct S
//{
//	int n;
//	int* p_arr;
//};
//int main()
//{
//	struct S* p = (struct S*)malloc(sizeof(struct S));
//	int i = 0;
//	if (p != NULL)
//	{
//		p->n = 100;
//		p->p_arr = (int*)malloc(p->n * sizeof(int));
//		if (p->p_arr != NULL)
//		{
//			for (i = 0; i < p->n; i++)
//			{
//				p->p_arr[i] = i;
//			}
//		}
//	}
//	for (i = 0; i < p->n; i++)
//	{
//		printf("%d\n", p->p_arr[i]);
//	}
//	free(p->p_arr);
//	p->p_arr = NULL;
//	free(p);
//	p = NULL;
//	return 0;
//}