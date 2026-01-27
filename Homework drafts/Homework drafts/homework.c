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


#include<stdio.h>
int math(int temp, int a)
{
	return temp * 10 + a;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int sum = 0;
	int temp = a;
	int count = 0;
	for (count = 1; count <= 5; count++)
	{
		temp = math(temp, a);
		sum += temp;
	}
	printf("%d", sum);
	return 0;
}