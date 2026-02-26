#define _CRT_SECURE_NO_WARNINGS 1
//字符分类函数
#include <stdio.h>
#include <ctype.h>
//int main()
//{
//	int c = isdigit('a');
//	printf("%d", c);
//	return 0;
//}


#include <string.h>
//将字符串中的小写转换为大写，其他的不变
int main()
{
	char arr[] = { "I am a Stduent" };
	size_t len = strlen(arr);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		//if (arr[i] >= 'a' && arr[i] <= 'z')
		if(islower(arr[i]))
		{
			//arr[i] -= 32;
			arr[i] = toupper(arr[i]);
		}
	}
	printf("%s", arr);
	return 0;
}