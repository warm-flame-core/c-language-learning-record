#define _CRT_SECURE_NO_WARNINGS 1

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水
//#include <stdio.h>
//int main()
//{
//	int money = 20;
//	int Soda = 0;
//	int Bottle = 0;
//	while (money)
//	{
//		money--;
//		Soda++;
//		Bottle++;
//		if (Bottle == 2)
//		{
//			Bottle -= 2;
//			money++;
//		}
//	}
//	if (money == 0 && Bottle == 1)
//	{
//		Soda++;
//	}
//	printf("%d", Soda);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int i, j, k;
//
//	for (i = 1; i <= 9; i += 2) {
//		for (j = 0; j < (9 - i) / 2; j++) 
//		{
//			printf(" ");
//		}
//		for (k = 0; k < i; k++) 
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 7; i >= 1; i -= 2) 
//	{
//		for (j = 0; j < (9 - i) / 2; j++) 
//		{
//			printf(" ");
//		}
//		for (k = 0; k < i; k++) 
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//求出0～100000之间的所有“水仙花数”并输出。
//
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include <stdio.h>
//#include <math.h>  
//int get_digit_count(int num) 
//{
//    if (num == 0) 
//    { 
//        return 1;
//    }
//    int count = 0;
//    while (num > 0) 
//    {
//        num /= 10;
//        count++;
//    }
//    return count;
//}
//
//int main() {
//    for (int num = 0; num <= 100000; num++) 
//    {
//        int n = get_digit_count(num);  
//        int temp = num;                
//        int sum = 0;                   
//
//      
//        while (temp > 0) 
//        {
//            int digit = temp % 10;     
//            sum += pow(digit, n);      
//            temp /= 10;                
//        }
//
//        
//        if (num == 0) 
//        {
//            printf("%d ", num);
//        }
//      
//        else if (sum == num) 
//        {
//            printf("%d ", num);
//        }
//    }
//
//    printf("\n");
//    return 0;
//}


//#include<stdio.h>
//int math(int temp, int a)
//{
//	return temp * 10 + a;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int sum = 0;
//	int temp = a;
//	int count = 0;
//	for (count = 1; count <= 5; count++)
//	{
//		temp = math(temp, a);
//		sum += temp;
//	}
//	printf("%d", sum);
//	return 0;
//}





//递归的方式实现求斐波那契数
//#include<stdio.h>
//int Fact(int n)
//{
//	if (n < 3)
//		return 1;
//	else
//		return Fact(n - 1) + Fact(n - 2);
//}
//int Fit(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret1 = Fact(n);
//	int ret2 = Fact(n);
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//	return 0;
//}



//使用递归实现n的k次方
//#include <stdio.h>
//long long Fit(int n, int k)
//{
//	if (k == 0) 
//	{
//		return 1;
//	}
//	if (k == 1)
//		return n;
//	return n * Fit(n, k - 1);
//		
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	long long ret = Fit(n, k);
//	printf("%d", ret);
//	return 0;
//}



//计算一个数的每位之和（递归实现）
//#include<stdio.h>
//int sum = 0;
//int Fib(int n)
//{
//	if (n > 9)
//		Fib(n / 10);
//	sum += n % 10;
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}



//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//#include<stdio.h>
//long long Fib(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return n * Fib(n - 1);
//}
//long long Fact(int n)
//{
//	int ret = 1;
//	if (n == 0)
//		return 1;
//	else
//	{
//		while (n)
//		{
//			ret *= n;
//			n--;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long long ret1 = Fib(n);
//	long long ret2 = Fact(n);
//	printf("%lld %lld", ret1, ret2);
//	return  0;
//}



//递归方式实现打印一个整数的每一位
//#include <stdio.h>
//void Print(int n)
//{
//	if (n > 9)
//		Print(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}


//#include<stdio.h>
//int count = 0;
//int Fact(int n)
//{
//	if (n == 3)
//		count++;
//	if (n < 3)
//		return 1;
//	else
//		return Fact(n - 1) + Fact(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fact(n);
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//	return 0;
//}


#include<stdio.h>
int fact(int n)
{
	if (n == 0)
		return 1;
	else
		return n * fact(n - 1);
}
int factsum(int n)
{
	if (n == 0)
		return 1;  
	if (n == 1)
		return 1;
	return factsum(n - 1) + fact(n);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int a = fact(n);
	int b = factsum(n);
	printf("fact(%d)=%d\n", n, a);
	printf("sum(%d)=%d\n", n, b);
}