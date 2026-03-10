#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//联合体大小
//union stu 
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union stu un = { 0 };
//	printf("%zu\n", sizeof(un));
//}


//联合体特点
//union stu
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union stu un = { 0 };
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n", un.i);
//}


//用联合体判断大小字节序
//union stu
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union stu un = { 0 };
//	un.i = 1;
//	if (un.c)
//	{
//		printf("小段\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//}


//枚举
enum Sex
{
	MALE=5,
	FEMALE,
	SECRET
};

enum Sex clr = FEMALE;//在C语言中可以赋值，在C++中不可以