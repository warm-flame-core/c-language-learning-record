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


//const修饰变量
//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	int m = 20;
//	const int* const p = &n;
//	*p = 20;
//	p = &m;
//	return 0;
//}


//assert断言
//#include <stdio.h>
//#include <assert.h>
//int main()
//{
//	int* p = NULL;
//	assert(p != NULL);
//	printf("hehe\n");
//	return 0;
//}


//strlen实现
//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	size_t a = my_strlen(arr);
//	printf("%zu\n", a);
//	return 0;
//}


//传址调用：写一个函数交换两个整形的值
//#include <stdio.h>
//void swap(int* px, int* py)
//{
//	int t = *px;
//	*px = *py;
//	*py = t;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}


//取出整个数组和数组名为首元素的地址
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0,1.2,3,4,5,6,7,8,9 };
//	printf("&arr[0]=%p\n", &arr[0]);
//	printf("arr    =%p\n", arr);
//	printf("arr+1  =%p\n", arr+1);
//	printf("&arr   =%p\n", &arr);
//	printf("&arr+1 =%p\n", &arr+1);
//	return 0;
//}


//使用指针访问数组
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d ", p + i);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//冒泡排序
//#include <stdio.h>
//void bubble_sort(int arr[], int sz)//
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,4,5,6,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//二级指针
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	**ppa = 30;
//	printf("%d\n", a);
//	return 0;
//}


//指针数组模拟二级指针
//#include <stdio.h>
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//字符指针变量
//#include <stdio.h>
//int main()
//{
//	char* p = "Hello";
//	printf("%c\n", *p);
//	return 0;
//}


//数组指针变量
//#include <stdio.h>
//void test(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));  //等价于arr[i][j]
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6},{3,4,5,6,7} };
//	test(arr, 3, 5);
//	return 0;
//}


//函数指针变量
//#include <stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 30;
//	int (*pf)(int, int) = add;
//	int r = pf(a, b);
//	printf("%d\n", r);
//	return 0;
//}


//typedef关键字与#define
//#define PINT int*
//typedef int* pint;
//int main()
//{
//	PINT p1, p2;
//	pint p3, p4;
//	int* p5, p6;
//	//int*与#defin不可以连续定义，要用typedef
//	return 0;
//}


//数组指针重命名
//#include<stdio.h>
//int main()
//{
//	typedef int(*parr)[5];
//	int arr[5] = { 0 };
//	int(*p)[5] = &arr;
//	parr p1 = arr;
//	return 0;
//}
//
//
//函数指针重命名
//#include <stdio.h>
//typedef int(*pf)(int, int);
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pf1)(int, int) = add;
//	pf pf2 = add;
//	return 0;
//}


//简单计算器实现,用函数指针数组
//#include <stdio.h>
//
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int (*p[5])(int, int) = { NULL,add,sub,mul,div };
//	do
//	{
//		printf("请选择要进行的操作\n");
//		printf("*************************\n");
//		printf("***1.add        2.sub****\n");
//		printf("***3.mul        4.div****\n");
//		printf("***0.exit*****************\n");
//		printf("*************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input > 0 && input < 5)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else
//		{
//			printf("输入有误\n");
//		}
//	} while (input);
//	return 0;
//}


//使用qsort函数排序数据
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int arr[10] = { 1,3,5,7,9,2,4,6,8,0 };
//int sz = sizeof(arr) / sizeof(arr[0]);
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
////int int_cmp(const void* p1, const void* p2)
////{
////	return *(int*)p1 - *(int*)p2;
////}
////void test1()
////{
////	qsort(arr, sz, sizeof(int), int_cmp);
////}
//int cmp_stu_by_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//void test2()
//{
//	struct Stu s[] = { {"zhangsan",18},{"lisi",15},{"wangwu",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//void print_arr() 
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	//test1();	//排序整形数据
//	test2();	//按名字排序结构体数据
//	//print_arr();
//	return 0;
//}


//写一个函数，让字符串逆序打印
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	char s[10001] = {0};
//	fgets(s, sizeof(s), stdin);
//	size_t len = strlen(s);
//	if (len > 0 && s[len - 1] == '\n') 
//	{
//		s[len - 1] = '\0';
//		len--; 
//	}
//	char* left = s;
//	char* right = s + len - 1;
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		*left++;
//		*right--;
//	}
//	printf("%s", s);
//	return 0;
//}


//字符串左旋
//#include <stdio.h>
//#include <string.h>
//
//void left_rotate(char s[], int k) {
//    if (k <= 0) return;
//        int len = 0;
//    while (s[len] != '\0') {
//        len++;
//    }
//    if (len == 0) return; 
//    k = k % len;
//    if (k == 0) return; 
//    char temp[10001] = { 0 };
//    for (int i = 0; i < k; i++) {
//        temp[i] = s[i];
//    }
//    for (int i = 0; i < len - k; i++) {
//        s[i] = s[i + k];
//    }
//    for (int i = 0; i < k; i++) {
//        s[len - k + i] = temp[i];
//    }
//}
//
//int main() {
//    char s[10001] = { 0 }; 
//    fgets(s, sizeof(s), stdin);
//    int len = 0;
//    while (s[len] != '\0') {
//        len++;
//    }
//    if (len > 0 && s[len - 1] == '\n') {
//        s[len - 1] = '\0';
//    }
//    int k = 1;
//    left_rotate(s, k);
//    printf("%s\n", s);
//    return 0;
//}


//模拟实现库函数strlen
//#include <stdio.h>
//int my_strlen(const char* p1)
//{
//	int count = 0;
//	while (*p1)
//	{
//		count++;
//		p1++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcdefghi");
//	printf("%d", len);
//	return 0;
//}


//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//#include <stdio.h>
//void adjust(int arr[], int sz) 
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right) 
//	{
//
//		while (left < right && arr[left] % 2 != 0) 
//		{
//			left++;
//		}
//		while (left < right && arr[right] % 2 == 0) 
//		{
//			right--;
//		}
//		// 交换
//		if (left < right) {
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//		}
//	}
//}
//void print_array(int arr[], int sz) {
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	printf("调整前：");
//	print_array(arr, sz);
//
//	adjust(arr, sz);
//
//	printf("调整后：");
//	print_array(arr, sz);
//
//	return 0;
//}


//使用指针打印数组内容
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


//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//#include <stdio.h>
//int get_str_length(const char* s) 
//{
//    int len = 0;
//    while (s[len] != '\0') {
//        len++;
//    }
//    return len;
//}
//
//int is_substring(const char* main_str, const char* sub) 
//{
//    int main_len = get_str_length(main_str);
//    int sub_len = get_str_length(sub);
//    if (sub_len == 0 || sub_len > main_len) 
//    {
//        return 0;
//    }
//    for (int i = 0; i <= main_len - sub_len; i++) 
//    {
//        int match = 1; 
//        for (int j = 0; j < sub_len; j++) 
//        {
//            if (main_str[i + j] != sub[j]) 
//            {
//                match = 0;
//                break; 
//            }
//        }
//        if (match == 1) 
//        {
//            return 1; 
//        }
//    }
//    return 0; 
//}
//
//
//int is_rotated_string(const char* s1, const char* s2) 
//{
//    int len1 = get_str_length(s1);
//    int len2 = get_str_length(s2);
//    if (len1 != len2 || len1 == 0) 
//    {
//        return 0;
//    }
//    char temp[20002] = { 0 }; 
//    int idx = 0;
//    for (int i = 0; i < len1; i++) 
//    {
//        temp[idx++] = s1[i];
//    }
//  
//    for (int i = 0; i < len1; i++) 
//    {
//        temp[idx++] = s1[i];
//    }
//    temp[idx] = '\0';
//    return is_substring(temp, s2);
//}
//
//int main() {
//    char s1[10001] = { 0 }, s2[10001] = { 0 };
//    printf("请输入字符串s1：");
//    fgets(s1, sizeof(s1), stdin);
//    printf("请输入字符串s2：");
//    fgets(s2, sizeof(s2), stdin);
//    int len1 = get_str_length(s1);
//    if (len1 > 0 && s1[len1 - 1] == '\n') 
//    {
//        s1[len1 - 1] = '\0';
//    }
//    int len2 = get_str_length(s2);
//    if (len2 > 0 && s2[len2 - 1] == '\n') 
//    {
//        s2[len2 - 1] = '\0';
//    }
//    int result = is_rotated_string(s1, s2);
//    printf("判断结果：%d\n", result);
//
//    return 0;
//}


//杨辉三角
//#include <stdio.h>
//#define col 10
//int main()
//{
//	int i = 0;
//	char arr[col][col] = { 0 };
//	for (int i = 0; i < col; i++) 
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//		for (int j = 1; j < i; j++) 
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	int a = 0;
//	for (a = 0; a < col; a++)
//	{
//		int b = 0;
//		for (b = 0; b < col; b++)
//		{
//			printf("%5d  ", arr[a][b]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = arr;
//	int a = 0;
//	int b = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int flag = 0;
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (*(p + i+j) != *p)
//			{
//				break;
//			}
//		}
//		a = *p;
//		b = *(p + i + j);
//	}
//	printf("%d %d", a, b);
//	return 0;
//}