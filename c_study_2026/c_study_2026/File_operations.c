#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//fopen函数和close函数
//int main()
//{
//	FILE* fp = fopen("test.txt", "r");
//
//	if (fp == NULL)
//	{
//		perror("fopen\n");
//		return 1;
//	}
//	printf("打开成功\n");
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}


//fpitc函数和fgetc函数
//int main()
//{
//	FILE* fp = fopen("./../test.txt", "w");
//	if (fp == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写所有字母
//	int i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, fp);
//	}
//	fclose(fp);
//	fp == NULL;
//	return 0;
//}
//int main()
//{
//	FILE* fp = fopen("./../test.txt", "r");
//	if (fp == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读取所有字母
//	int i = 0;
//	char arr[50] = { 0 };
//	for (i = 0; i < 26; i++)
//	{
//		arr[i] = (char)fgetc(fp);
//	}
//	for (i = 0; i < 26; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	fclose(fp);
//	fp == NULL;
//	return 0;
//}


//feof函数ferror函数
//int main()
//{
//	FILE* fp = fopen("./../test.txt", "r");
//	if (fp == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读取所有字母
//	int i = 0;
//	for (i = 0; i < 29; i++)
//	{
//		int c = fgetc(fp);
//		if (c == EOF)
//		{
//			if (feof(fp))
//				printf("文件到末尾了\n");
//			else if (ferror(fp))
//				printf("文件打开错误\n");
//		}
//		else
//			printf("%c ", c);
//	}
//	fclose(fp);
//	fp == NULL;
//	return 0;
//}


//文件的随机读写
//int main()
//{
//	FILE* fp = fopen("./../test.txt", "r");
//	if (fp == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读取所有字母
//	int i = 0;
//	for (i = 0; i < 24; i++)
//	{
//		int c = (char)fgetc(fp);
//		printf("%c", c);
//	}
//	rewind(fp);
//	int c = (char)fgetc(fp);
//	printf("%c", c);
//	fseek(fp, 3, SEEK_SET);
//	c = (char)fgetc(fp);
//	printf("%c", c);
//	fflush(fp);
//	fclose(fp);
//	fp == NULL;
//	return 0;
//}


//写一个程序拷贝文件
int main()
{
	FILE* fp1 = fopen("test.txt", "r");
	if (fp1 == NULL)
	{
		perror("fopen1");
		return 1;
	}
	FILE* fp2 = fopen("data_copy.txt", "w");
	if (fp2 == NULL)
	{
		perror("fopen2");
		return 1;
	}
	int ch = 0;
	while ((ch = fgetc(fp1)) != EOF)
	{
		fputc(ch, fp2);
	}
	fclose(fp1);
	fp1 == NULL;
	fclose(fp2);
	fp2 == NULL;
	return 0;
}