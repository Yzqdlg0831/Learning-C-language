#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void game()
{
	//创建数组
	char main[ROWS][COLS];//存放布置好的雷的信息
	char show[ROWS][COLS];//存放排查出来雷的的信息
	//初始化数组
	InitBoard(main, ROWS, COLS, '0');//初始化为0
	InitBoard(show, ROWS, COLS, '*');//初始化为*
	//打印棋盘
	//DispalyBoard(main, ROW, COL);
	DispalyBoard(show, ROW, COL);
	//布置雷
	SetMine(main,ROW,COL, EASY_COUNT);
	//DispalyBoard(main, ROW, COL);//布置雷后的棋盘
	FineMine(main, show, ROW, COL);//排查雷
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 1;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束！\n");
			break;
		default:
			printf("对不起，选择错误，请重新选择!\n");
			break;
		}

	} while (input);
	return 0;
}