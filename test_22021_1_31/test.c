#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void game()
{
	char ret = 0;
	srand((unsigned int)time(NULL));
	printf("玩家棋子：O\n电脑棋子：X\n");
	char board[ROW][COL];//创建二维数组
	Initboard(board, ROW, COL);//初始化
	Displayboard(board,ROW,COL);//打印棋盘
	while (1)
	{
		PlayerMove(board,ROW,COL); //玩家下棋
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Displayboard(board, ROW, COL); //打印棋盘
		ComputerMove(board, ROW, COL);//电脑下棋
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Displayboard(board, ROW, COL); //打印棋盘
	}
	if (ret == 'X')
	{
		printf("回去再练练吧，电脑赢了！\n");
	}
	else if (ret == 'O')
	{
		printf("恭喜你，你赢了！\n");
	}
	else if (ret == 'P')
	{
		printf("平局！\n");
	}
	Displayboard(board, ROW, COL);
}

int main()
{
	int input = 0;
	do
	{
		meun();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！");
			break;
		default:
			printf("选择错误，请重新选择！");
		}

	} while (input);
	return 0;
}