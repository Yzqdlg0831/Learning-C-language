#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void game()
{
	char ret = 0;
	srand((unsigned int)time(NULL));
	printf("������ӣ�O\n�������ӣ�X\n");
	char board[ROW][COL];//������ά����
	Initboard(board, ROW, COL);//��ʼ��
	Displayboard(board,ROW,COL);//��ӡ����
	while (1)
	{
		PlayerMove(board,ROW,COL); //�������
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Displayboard(board, ROW, COL); //��ӡ����
		ComputerMove(board, ROW, COL);//��������
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Displayboard(board, ROW, COL); //��ӡ����
	}
	if (ret == 'X')
	{
		printf("��ȥ�������ɣ�����Ӯ�ˣ�\n");
	}
	else if (ret == 'O')
	{
		printf("��ϲ�㣬��Ӯ�ˣ�\n");
	}
	else if (ret == 'P')
	{
		printf("ƽ�֣�\n");
	}
	Displayboard(board, ROW, COL);
}

int main()
{
	int input = 0;
	do
	{
		meun();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��");
			break;
		default:
			printf("ѡ�����������ѡ��");
		}

	} while (input);
	return 0;
}