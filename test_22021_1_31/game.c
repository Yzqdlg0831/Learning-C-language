#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void meun()//菜单
{
	printf("***************************\n");
	printf("*******    1.Play   *******\n");
	printf("*******    0.exit   *******\n");
	printf("***************************\n");
}

void Initboard(char board[ROW][COL], int row, int col)//初始化棋盘（空格）
{
	int i = 0, j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void Displayboard(char board[ROW][COL], int row, int col)//打印棋盘
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col-1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{

			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)//玩家下棋
{
	int i = 0, j = 0;
	printf("玩家走>\n请输入下棋的坐标：");
	while (1)
	{
		scanf("%d %d", &i, &j);
		if (i > 0 && i <= row && j > 0 && j <= col)
		{
			if(board[i-1][j-1]==' ')
			{
				board[i - 1][j - 1] = 'O';
				break;
			}
			else
			{
				printf("这个位置已经有棋子，请重新输入坐标:");
			}
		}
		else
		{
			printf("坐标错误，请重新输入坐标:");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)//电脑下棋
{
	printf("电脑走>\n");
	while (1)
	{
		int i = rand() % row;
		int j = rand() % col;
		if (board[i][j] == ' ')
		{
			board[i][j] = 'X';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col)//判断棋盘是否下满
{
	int i = 0, j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char CheckWin(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	//判断行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		return board[i][0];
	}
	//判断列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i]; 
		}
	}
	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')
	{
		return board[1][1];
	}
	//判断平局
	if (IsFull(board, row, col) == 1)
	{
		return 'P';
	}
	return 'C';
}