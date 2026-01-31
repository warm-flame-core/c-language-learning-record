#define _CRT_SECURE_NO_WARNINGS 1


//交换两个变量（不创建临时变量）
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前a=%d，b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后a=%d，b=%d\n", a, b);
//	return 0;
//}


//统计二进制中1的个数
//#include <stdio.h>
// 
// int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int count = 0;
//    while (n)
//    {
//        count++;
//        n = n & (n - 1);
//    }
//    printf("%d", count);
//	return 0;
//}


//输入两个整数，求两个整数二进制格式有多少个位不同
//#include <stdio.h>

//int main()
//{
//    int a, b;
//    int count = 0;
//    while (scanf("%d %d", &a, &b) != EOF)
//    { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
//        int temp = a ^ b;
//        while (temp)
//        {
//            temp = temp & (temp - 1);
//            count++;
//        }
//        printf("%d\n", count);
//    }
//
//    return 0;
//}