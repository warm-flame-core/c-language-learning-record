#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//最简单的递归程序，但是会导致栈溢出
//int main()
//{
//	printf("Hello World\n");
//	main();
//	return 0;
//}

//递归的方式求n！
int Fact(int n)
{
	if (n == 0)
		return 1;
	else
		return n * Fact(n - 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = Fact(n);
	printf("%d", sum);
	return 0;
}