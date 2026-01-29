#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>

#define ROW 9		//定义行数
#define COL 9		//定义列数

#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10		//定义雷数

//声明函数

//初始化棋盘
void InitBorad(char arr[ROWS][COLS], int rows, int cols, char set);

//打印棋盘
void DisplayBorad(char arr[ROWS][COLS], int row, int col);

//布置雷
void SetMine(char arr[ROWS][COLS], int row, int col);

//排雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);