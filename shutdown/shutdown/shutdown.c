#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <windows.h>
#include <string.h>

int main()
{
	char arr[20] = {0};
	//关机
	system("shutdown -s -t 60");

	while (1)
	{
		printf("请注意，你的电脑在1分钟内关机，如果输入：“我是猪”按下Enter键，就取消关机\n");
		scanf("%s", arr);
		//判断
		if (strcmp(arr, "我是猪") == 0)
		{
			system("shutdown -a");
			printf("你很配合，取消关机\n");
			break;
		}
	}
	getchar();
	return 0;
}
