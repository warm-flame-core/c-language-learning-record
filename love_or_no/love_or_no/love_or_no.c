#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int age = 0;
	printf("请输入年龄:");
	scanf("%d", &age);
	if (age >= 18)
	{
		printf("成年了\n");
		printf("可以谈恋爱了\n");
	}
	if (age < 18)
		printf("还不可以谈恋爱\n");
	getchar();
	return 0;
}