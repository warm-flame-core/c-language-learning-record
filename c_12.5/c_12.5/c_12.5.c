#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int number = 0;
	printf("%s", "请输入数字");
	scanf("%d", &number);
	if (number % 2 == 1)
		printf("%d 是奇数\n", number);
	else
		printf("%d 是偶数\n", number);
	getchar();
	return 0;
}
