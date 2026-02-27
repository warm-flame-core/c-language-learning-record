#define _CRT_SECURE_NO_WARNINGS 1
//字符分类函数
#include <stdio.h>
#include <ctype.h>
//int main()
//{
//	int c = isdigit('a');
//	printf("%d", c);
//	return 0;
//}


#include <string.h>
////将字符串中的小写转换为大写，其他的不变
//int main()
//{
//	char arr[] = { "I am a Stduent" };
//	size_t len = strlen(arr);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		//if (arr[i] >= 'a' && arr[i] <= 'z')
//		if(islower(arr[i]))
//		{
//			//arr[i] -= 32;
//			arr[i] = toupper(arr[i]);
//		}
//	}
//	printf("%s", arr);
//	return 0;
//}


//strlen函数
//int main()
//{
//	size_t len = strlen("abcdfr");
//	printf("%zu\n", len);
//	return 0;
//}


//模拟实现strlen函数
#include <assert.h>
//size_t my_strlen(char *str)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}

//size_t my_strlen(char* str)
//{
//	assert(str);
//	char* p = str;
//	while (*p)
//	{
//		p++;
//	}
//	return p - str;
//}

//size_t my_strlen(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zu\n", len);
//	return 0;
//}


//strcpy函数
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//strcpy函数的模拟实现
//char* my_strcpy(char* p1, const char* p2)
//{
//	char* ret = p1;
//	while (*p2)
//	{
//		*p1 = *p2;
//		p1++;
//		p2++;
//	}
//	return ret;
//}

//优化代码
char* my_strcpy(char* p1, const char* p2)
{
	assert(p1 && p2);
	char* ret = p1;
	while (*p1++ = *p2++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}