#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	float sum = 1;
	int i = 2;
	for (i = 2 ; i <= 100 ; i++)
	{
		float r = (float)1/i;
		if (i % 2 == 0)
		{
			sum = sum - r;
		}
		else if (i % 2 != 0)
		{
			sum = sum + r;
		}
	}
	printf("%lf", sum);
	return 0;
}