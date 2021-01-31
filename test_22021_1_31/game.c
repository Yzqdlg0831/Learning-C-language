#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void meun()//�˵�
{
	printf("***************************\n");
	printf("*******    1.Play   *******\n");
	printf("*******    0.exit   *******\n");
	printf("***************************\n");
}

void Initboard(char board[ROW][COL], int row, int col)//��ʼ�����̣��ո�
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

void Displayboard(char board[ROW][COL], int row, int col)//��ӡ����
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

void PlayerMove(char board[ROW][COL], int row, int col)//�������
{
	int i = 0, j = 0;
	printf("�����>\n��������������꣺");
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
				printf("���λ���Ѿ������ӣ���������������:");
			}
		}
		else
		{
			printf("���������������������:");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)//��������
{
	printf("������>\n");
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

int IsFull(char board[ROW][COL], int row, int col)//�ж������Ƿ�����
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
	//�ж���
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		return board[i][0];
	}
	//�ж���
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i]; 
		}
	}
	//�ж϶Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')
	{
		return board[1][1];
	}
	//�ж�ƽ��
	if (IsFull(board, row, col) == 1)
	{
		return 'P';
	}
	return 'C';
}