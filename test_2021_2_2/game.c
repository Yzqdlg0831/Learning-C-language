#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

int GetMainCont(char main[ROWS][COLS], int x, int y)//计算排查坐标周围总共有多少雷
{
	int i = 0;
	int k = 0;
	int sum = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (k = y - 1; k <= y + 1; k++)
		{
			sum += main[i][k] - '0';
		}
	}
	return sum;
}

void menu()//菜单
{
	printf("****************************\n");
	printf("********  1.Play    ********\n");
	printf("********  0.Exit    ********\n");
	printf("****************************\n");
}

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)//初始化棋盘
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] =set;
		}
	}
}

void DispalyBoard(char board[ROWS][COLS], int row, int col)//打印棋盘
{
	int i = 0;
	printf("---------------扫雷小游戏--------------\n");
	for (i = 0; i <=col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		int j = 0;
        printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("---------------扫雷小游戏--------------\n");

}

void SetMine(char main[ROWS][COLS], int row, int col, int count)//随机布置雷的坐标
{
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (main[x][y] == '0')
		{
			main[x][y] = '1';
			count--;
		}
	}
}

void FineMine(char main[ROWS][COLS], char show[ROWS][COLS], int row, int col)//玩家查找雷
{
	int win = 0;
	int x = 0;
	int y = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("请输入坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && y >= 1 && x <= row && y <= col)
		{
			if (main[x][y] == '0')
			{
				int ret = GetMainCont(main, x, y);
				show[x][y] = ret + '0';
				if (win < row * col - EASY_COUNT-1)
				{
					DispalyBoard(show, ROW, COL);
				}
				win++;
			}
			else
			{
				printf("很抱歉，您被炸死了！\n");
				DispalyBoard(main, ROW, COL);
				break;
			}
		}
		else
		{
			printf("抱歉，坐标不正确，请重新输入！\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你！成功排除所有雷！\n");
		DispalyBoard(main, ROW, COL);
	}
}