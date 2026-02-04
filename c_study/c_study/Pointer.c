#define _CRT_SECURE_NO_WARNINGS 1

//监视里取地址
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	return 0;
//}


//取地址操作符
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	&a;
//	printf("%p\n", &a);
//	return 0;
//}


//解引用操作符
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 0;
//	printf("%d\n", a);
//	printf("%d\n", *pa);
//	return 0;
//}


//指针变量的大小,不管什么类型的指针变量，大小都一样，都是指内存的一块空间。
//#include <stdio.h>
//int main()
//{
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(long long*));
//	printf("%zd\n", sizeof(long*));
//	printf("%zd\n", sizeof(float*));
//	printf("%zd\n", sizeof(double*));
//	return 0;
//}