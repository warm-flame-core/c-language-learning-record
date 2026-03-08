#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//memcpy函数
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1, 40);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


//memcpy的模拟实现
//void* my_memcpy(void* dst, void* src, size_t count)
//{
//	void* ret = dst;
//	while (count--)
//	{
//		*(char*)dst = *(char*)src;
//		dst = (char*)dst + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1, 40);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


//memmove函数
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,0 };
//	memmove(arr1 + 2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


//memmove函数模拟实现
//void* my_memmove(void* dst, void* src, size_t num)
//{
//	void *ret = dst;
//	//目标位置在原位置前面，从前往后
//	if (dst < src)
//	{
//		while (num--)
//		{
//		*(char*)dst = *(char*)src;
//		dst = (char*)dst + 1;
//		src = (char*)src + 1;
//		}
//	}
//	//目标位置在原位置后面，从后往前
//	else
//		while (num--)
//		{
//			*((char*)dst + num) = *((char*)src + num);
//		}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,0 };
//	my_memmove(arr1, arr1+2, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


//memset函数
//int main()
//{
//	char arr[] = "Hello World";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}


//memcmp函数
int main()
{
	char arr1[] = "Hello";
	char arr2[] = "hello";
	int r = memcmp(arr1, arr2, 2);
	printf("%d\n", r);
	return 0;
}