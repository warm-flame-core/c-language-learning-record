#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void game()
{
	int r = rand() % 1000 + 1;
	int guess = 0;
	int cnout = 0;
	while (1)
	{
		printf("（输入后按下enter）猜猜数字>:");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("猜小了\n\n");
		}
		else if (guess > r)
		{
			printf("猜大了\n\n");
		}
		else
		{
			printf("猜对了\n");
			printf("还是太菜了要猜那么多次\n");
			printf("猜了%d次\n\n", cnout+1);
			break;
		}
		cnout++;
	}	
}

void menu()
{
	printf("***猜数字游戏（0~999）***\n\n");
	printf("******** 1.play *********\n\n");
	printf("******** 0.exit *********\n\n");
	printf("*************************\n\n");
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("（输入后按下enter）请选择>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n\n");
			break;
		default:
			printf("选择错误，请重新选择\n\n");
			break;
		}
	} while (input);
	getchar();
	return 0;
}