#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void game()
{
	//��������
	char main[ROWS][COLS];//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS];//����Ų�����׵ĵ���Ϣ
	//��ʼ������
	InitBoard(main, ROWS, COLS, '0');//��ʼ��Ϊ0
	InitBoard(show, ROWS, COLS, '*');//��ʼ��Ϊ*
	//��ӡ����
	//DispalyBoard(main, ROW, COL);
	DispalyBoard(show, ROW, COL);
	//������
	SetMine(main,ROW,COL, EASY_COUNT);
	//DispalyBoard(main, ROW, COL);//�����׺������
	FineMine(main, show, ROW, COL);//�Ų���
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 1;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ������\n");
			break;
		default:
			printf("�Բ���ѡ�����������ѡ��!\n");
			break;
		}

	} while (input);
	return 0;
}