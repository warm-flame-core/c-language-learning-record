#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//初始化棋盘函数
void InitBorad(char arr[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}
}

//打印棋盘函数
void DisplayBorad(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("------------扫雷--------------\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d - ", i);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d | ", i);
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			printf("%c   ", arr[i][j]);
		}
		printf("\n");
	}
}

//布置雷函数
void SetMine(char arr[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}
}

static int GetMineCount(char arr[ROWS][COLS],int x,int y)
{
	int mine_count = 0;
	int i = 0;
	for (i = x-1; i <= x+1; i++)
	{
		int j = 0;
		for (j = y - 1; j <= y + 1; j++)
		{
			mine_count += arr[i][j];
		}
	}
	return mine_count - '0' * 9;
}

//排雷函数
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int over = 0;
	while (over < row * col - EASY_COUNT)
	{
		printf("(两个坐标之间请用空格隔开,输入后请按回车)\n");
		printf("请输入要排查的雷的坐标> ");
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= row)
		{
			if (mine[x][y] == '1')
			{
				printf("\n\n\n");
				printf("运气太好了，你被炸死了\n");
				printf("数字1代表雷，数字0代表不是雷\n");
				DisplayBorad(mine, ROW, COL);
				printf("请等待加载\n");
				Sleep(5000);
				break;
			}
			else
			{
				if (show[x][y] != '*')
				{
					printf("此坐标已被排查，请重新输入\n");
				}
				else
				{
					int count = 0;
					count = GetMineCount(mine, x, y);
					show[x][y] = count + '0';
					DisplayBorad(show, ROW, COL);
					over++;
				}
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
	if (over == row * col - EASY_COUNT)
	{
		printf("排完了，全是运气，没有实力\n");
		DisplayBorad(mine, ROW, COL);
		printf("请等待加载");
		Sleep(5000);
	}
}