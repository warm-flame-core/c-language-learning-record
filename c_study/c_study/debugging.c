#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		int j = 0;
//		int win = 1;
//		for (j = 1; j <= i; j++)
//		{
//			win *= j;
//		}
//		sum += win;
//	}
//	printf("%d", sum);
//	return 0;
//}
int main()
{
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		ret *= n;
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}