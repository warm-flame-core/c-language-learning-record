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

//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}



//在一个整型数组中，只有一个数字出现一次，其他数组都是成对出现的，请找出那个只出现一次的数字。
//
//例如：
//
//数组中有：1 2 3 4 5 1 2 3 4，只有5出现一次，其他数字都出现2次，找出5
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,1,2,3,4,2,4,2,4,5,7,8,6,9,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		int win = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				win++;
//			}
//		}
//		if (win == 1)
//			break;
//	}
//	printf("%d\n", arr[i]);
//	return 0;
//}


//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("奇数位是：");
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位是：");
//	int j = 0;
//	for (j = 30; j >= 0; j -= 2)
//	{
//		printf("%d", (n >> j) & 1);
//	}
//	return 0;
//}