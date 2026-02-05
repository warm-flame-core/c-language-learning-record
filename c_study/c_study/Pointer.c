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


//指针类型决定了指针向前或者向后多大距离
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	char* pc = (char*)&a;
//	int* pi = &a;
//
//	printf("%p\n", &a);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	printf("%p\n", pi);
//	printf("%p\n", pi+1);
//	return 0;
//}


//用指针遍历数组
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}