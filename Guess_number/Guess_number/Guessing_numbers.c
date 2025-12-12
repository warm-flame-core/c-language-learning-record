#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned int)time(NULL));
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	return 0;
}
//需要随机初始化种子，才能输出随机数