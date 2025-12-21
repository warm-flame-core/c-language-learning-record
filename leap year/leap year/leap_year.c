#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void leap_year(int a)
{
	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
	{
		printf("%d是闰年\n", a);
	}
	else
	{
		printf("%d不是闰年\n", a);
	}
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	leap_year(a);
	return 0;
}