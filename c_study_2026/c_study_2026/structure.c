#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//struct stduent
//{
//	char name[20];
//	int age;
//	int num;
//};
//int main()
//{
//	struct stduent s = { .name = "wangwu",.num = 20,.age = 18 };
//	printf("%s\n", s.name);
//	return 0;
//}


//结构体指针
//struct stduent
//{
//	char name[20];
//	int age;
//	int num;
//};
//struct stduent s = { .name = "王五",.num = 20,.age = 18 };
//void print1(struct stduent* s)
//{
//	printf("%s\n", s->name);
//}
//int main()
//{
//	print1(&s);
//	return 0;
//}


//结构体数组
//struct stu
//{
//	char arr[20];
//	int age;
//};
//struct stu arr[10] = { 0 };


//结构体对齐数
//#pragma pack(1)
//int main()
//{
//
//	return 0;
//}


//位段:不能取地址操作，用scanf获取应该先给其他变量再赋值，因为位段的成员可能在同一地址
struct S
{
	char a : 2;
	char b : 3;
	char c : 4;
};