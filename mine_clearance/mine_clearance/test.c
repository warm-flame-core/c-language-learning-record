#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("***************************\n");
	printf("********   扫雷   *********\n");
	printf("********  1.play **********\n");
	printf("********  0.exit **********\n");
	printf("***************************\n");
}

void game()  //扫雷游戏逻辑
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	//初始化棋盘
	InitBorad(mine, ROWS, COLS, '0');
	InitBorad(show, ROWS, COLS, '*');

	//布置雷
	SetMine(mine, ROW, COL);
	
	//打印棋盘
	DisplayBorad(mine, ROW, COL);
	DisplayBorad(show, ROW, COL);

	//开始排查雷
	//DisplayBorad(show, ROW, COL);
	//FindMine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		printf("请等待加载（2秒+…………………………………………）\n");
		menu();
		printf("请选择（输入对应数字后按下enter）");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("拜拜了\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	
}

int main()
{
	test();
	return 0;
}