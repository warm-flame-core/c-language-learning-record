#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int max = 0;
	int falg = 10;
	while (falg)
	{
		int i = 1;
		scanf("%d ", &i);
		if (max <= i)
		{
			max = i;
		}
		falg--;
	}
	printf("%d ", max);
	return 0;
}