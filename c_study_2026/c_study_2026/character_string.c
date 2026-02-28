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
//char* my_strcpy(char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* ret = p1;
//	while (*p1++ = *p2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//strcat函数
//#include <stdio.h>
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	char* r = strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//strcat函数模拟实现
//char* my_strcat(char*p1,const char*p2)
//{
//	assert(p1 && p2);
//	int ret = p1;
//	while (*p1)
//	{
//		p1++;
//	}
//	while (*p1++ = *p2++)
//		;
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	char* r = my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//strcmp函数
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abcd";
//	int r = strcmp(arr1, arr2);
//	printf("%d\n", r);
//	return 0;
//}


//strcmp函数模拟实现
//int my_strcmp(char* p1, char* p2)
//{
//	while (*p1 == *p2)
//	{
//		if (!*p1 && !*p2)
//			return 0;
//		p1++;
//		p2++;
//	}
//	return *p1 - *p2;
//}
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abcd";
//	int r = my_strcmp(arr1, arr2);
//	printf("%d\n", r);
//	return 0;
//}


//strstr函数
//int main()
//{
//	char arr1[] = "abcabcde";
//	char arr2[] = "bcd";
//	char* pch = strstr(arr1, arr2);
//	printf("%s\n", pch);
//	return 0;
//}


//strstr函数模拟实现
//char* my_strstr(const char* str1, const char* str2)
//{
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cp = str1;	//记录可能的起始位置
//	if (!*str2)
//		return (str1);
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1&&*s2&&!(*s1-*s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)
//			return cp;
//		cp++;
//	}
//	return(NULL);
//}
//char* my_strstr(const char* str1, const char* str2)
//{
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cp = str1;	////记录可能的起始位置
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)
//		{
//			return cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abcabcde";
//	char arr2[] = "bcd";
//	char* pch = my_strstr(arr1, arr2);
//	printf("%s\n", pch);
//	return 0;
//}


//strncpy的模拟实现
//char* my_strncpy(char* p1, const char* p2, int n)
//{
//	assert(p1 && p2);
//	char* ret = p1;
//	while (n)
//	{
//		*p1++ = *p2++;
//		n--;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { "-------" };
//	char arr2[] = "hel";
//	my_strncpy(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}


//strcat函数模拟实现
//char* my_strncat(char* p1, const char* p2, int n)
//{
//	assert(p1 && p2);
//	int ret = p1;
//	while (*p1)
//	{
//		p1++;
//	}
//	while (n)
//	{
//		*p1++ = *p2++;
//		n--;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	char* r = my_strncat(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}