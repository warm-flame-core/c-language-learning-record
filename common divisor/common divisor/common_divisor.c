#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int r = 0;
	printf("请输入两个数字>");
	scanf("%d  %d", &a, &b);
	int i = 1;
	for (i = 1;b >= i && a >= i;i++)
	{
		
		if (a % i == 0 && b % i == 0)
		{
			r = i;
		}
		
	}
	printf("%d\n", r);
	
	return 0;
}