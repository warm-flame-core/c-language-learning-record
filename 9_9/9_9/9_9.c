#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ÕýÐò°æ±¾
//int main()
//{
//	int a = 1;
//	int b = 1;
//	while (a<10)
//	{
//		
//		while (b<=a)
//		{
//			printf("%d¡Á%d=%d  ", b, a, a * b);
//			b++;
//		}
//		b = 1;
//		printf("\n");
//		a++;
//	}
//	return 0;
//}


//µ¹Ðð°æ±¾
int main()
{
	int a = 9;
	while (a)
	{
		int b = a;
		while (b)
		{
			printf("%d¡Á%d=%d  ", b, a, a * b);
			b--;
		}
		printf("\n");
		a--;
	}
	return 0;
}