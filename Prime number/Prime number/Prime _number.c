#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 100;
	int r = 1;
	for (i = 100;i <= 200;i++)
	{
		int flag = 1;
		for (r = 2;r <= i - 1;r++)
		{
			if (i % r == 0)
			{
				flag = 0;
				
			}
		}
		if (flag == 1)
		{
			printf("%d  ", i);
		}
	}
	return 0;
}