#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>  //创建头文件，引入函数

//int main()  //使用main函数，每个项目都有且只有一个main函数作为程序入口
//{
//	printf("hello world\n");  //打印内容，并换行
//	getchar();
//	return 0;
//}

int main()
{
	char arr1[] = { 'a' , 'b' , 'c' };  //未加转义字符/0，字符串不能结束
	printf("%s\n", arr1);  //字符串未结束，后面随机生成字符
	getchar();
	return 0;
}