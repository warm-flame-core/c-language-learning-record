#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18 && age <= 36)
//		printf("青年\n");
//	return 0;
//}


//三目操作符
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a > b ? a : b);     //判断哪个数更大
//	printf("%d\n",a);
//	return 0;
//}



//逻辑取反操作符：！
//int main()
//{
//	int flag = 0;
//	if (!flag)
//		printf("试验成功");
//	return 0;
//}


//判断是否是闰年
//1.能被4整除并且不能被100整除
//2.能被四百整除
int main()
{
	int year = 0;
	printf("请输入年份");
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0)
		printf("是闰年");
	else if (year % 100 == 0)
		printf("是闰年");
	else
		printf("不是闰年");
	getchar();
	return 0;
}