#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#define N 16 //���Ը������̴�С
char qipan[N][N];//ȫ�ֱ����������ļ��Ķ�������
int x, y;//����������̣�����)�±�Ϊx���� ��  �±�Ϊy�е�һ������
void initQipan();//���̵ĳ�ʼ��
void printQipan();//��ӡ����
void Pos(int x, int y);//���ù��λ��
void startGame();//��Ϸ��ʼ
int panduan(int x, int y);//�ж��Ƿ�������������
int showWhoWin();//���˭Ӯ��
void whitePlay();//�׷�����
void blackPlay();//�ڷ�����
void printShuzi();//��ӡ����ģ��


void Pos(int x, int y)//���ù��λ�ã������￪ʼ���
{
	COORD pos;//��ʾһ���ַ��ڿ���̨��Ļ�ϵ����꣬���Ͻ�(0,0)
	HANDLE hOutput;
	pos.X = x;
	pos.Y = y;
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);//���ر�׼�����롢����������豸�ľ����Ҳ���ǻ�����롢���/�������Ļ�������ľ��
	SetConsoleCursorPosition(hOutput, pos);
}

void printShuzi()
{
	int i;
	Pos(2, 0);
	for (i = 0; i < N; i++)
		printf("%2d", i);
	for (i = 0; i < 16; i++)
	{
		Pos(0, 1 + i);
		printf("%2d", i);
	}
}
void initQipan()
{
	int i, j;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			qipan[i][j] = '*';
}
void printQipan()
{
	int i, j;
	printShuzi();
	for (i = 0; i < N; i++)
	{
		Pos(2, 1 + i);//�Զ����е�����Ĺ��ܣ�����printf("\n");
		for (j = 0; j < N; j++)
			printf(" %c", qipan[i][j]);
	}
}

int  panduan(int x, int y)
{
	char temp;//�������巽����ɫ,w  b
	int count = 1;//ͳ�Ƹ���,��Ե�ͬһ���ߣ�ˮƽ�ߣ�
	int i = 1;//��һ��
	int j = 1;//��iͬʱ����������б��
	int whoWin = 0;//1����׷���2����ڷ�
	temp = qipan[x][y];
	//ˮƽ�����
	while (temp == qipan[x][y - i] && x >= 0 && x < N && y >= 0 && y < N && count < 5)
	{
		i++;
		count++;
		if (count == 5)//����count��5�������ж�˭Ӯ��
		{
			if (temp == 'W')
				whoWin = 1;

			else
				whoWin = 2;
		}
	}
	//ˮƽ���ұ�
	i = 1;
	while (temp == qipan[x][y + i] && x >= 0 && x < N && y >= 0 && y < N && count < 5)
	{
		i++;
		count++;
		if (count == 5)//����count��5�������ж�˭Ӯ��
		{
			if (temp == 'W')
				whoWin = 1;

			else
				whoWin = 2;
		}
	}

	//�����ֱ�ķ���
	//��ֱ�Ϸ�
	i = 1;
	count = 1;//�����֮ǰ������
	while (temp == qipan[x - i][y] && x >= 0 && x < N && y >= 0 && y < N && count < 5)
	{
		i++;
		count++;
		if (count == 5)//����count��5�������ж�˭Ӯ��
		{
			if (temp == 'W')
				whoWin = 1;

			else
				whoWin = 2;
		}
	}
	//��ֱ�·�
	i = 1;
	while (temp == qipan[x + i][y] && x >= 0 && x < N && y >= 0 && y < N && count < 5)
	{
		i++;
		count++;
		if (count == 5)//����count��5�������ж�˭Ӯ��
		{
			if (temp == 'W')
				whoWin = 1;

			else
				whoWin = 2;
		}
	}
	//������ϵ�б��  �Ϸ�
	i = 1;
	j = 1;
	count = 1;
	while (temp == qipan[x - i][y - j] && x >= 0 && x < N && y >= 0 && y < N && count < 5)
	{
		i++;
		j++;
		count++;
		if (count == 5)//����count��5�������ж�˭Ӯ��
		{
			if (temp == 'W')
				whoWin = 1;

			else
				whoWin = 2;
		}
	}
	//������ϵ�б��  �·�
	i = 1;
	j = 1;
	while (temp == qipan[x + i][y + j] && x >= 0 && x < N && y >= 0 && y < N && count < 5)
	{
		i++;
		j++;
		count++;
		if (count == 5)//����count��5�������ж�˭Ӯ��
		{
			if (temp == 'W')
				whoWin = 1;

			else
				whoWin = 2;
		}
	}
	//������ϵ�б��  �Ϸ�
	i = 1;
	j = 1;
	count = 1;
	while (temp == qipan[x - i][y + j] && x >= 0 && x < N && y >= 0 && y < N && count < 5)
	{
		i++;
		j++;
		count++;
		if (count == 5)//����count��5�������ж�˭Ӯ��
		{
			if (temp == 'W')
				whoWin = 1;

			else
				whoWin = 2;
		}
	}
	//������ϵ�б��  �·�
	i = 1;
	j = 1;
	while (temp == qipan[x + i][y - j] && x >= 0 && x < N && y >= 0 && y < N && count < 5)
	{
		i++;
		j++;
		count++;
		if (count == 5)//����count��5�������ж�˭Ӯ��
		{
			if (temp == 'W')
				whoWin = 1;

			else
				whoWin = 2;
		}
	}
	return whoWin;
}

int showWhoWin()
{
	int overLeap = 0;//1�������
	int leap;//��������˭Ӯ��
	leap = panduan(x, y);
	if (leap == 1)
	{
		overLeap = 1;
		system("cls");
		printQipan();
		printf("\n�׷�ʤ��\n");
		system("pause");
	}
	if (leap == 2)
	{
		overLeap = 1;
		system("cls");
		printQipan();
		printf("\n�ڷ�ʤ��\n");
		system("pause");
	}
	return overLeap;
}

void whitePlay()
{
	printf("\n��׷����ӣ����������е�����:");
	scanf("%d%d", &x, &y);//�����ֵ
	while (1)//���һֱ�´��ӵ�����
	{
		if (qipan[x][y] == '*')//���ӵĵط�û��������
		{
			qipan[x][y] = 'W';
			//���while(1)
			break;
		}
		else
		{
			printf("�����Ӵ���\n");
			printf("��׷����ӣ����������е�����:");
			scanf("%d%d", &x, &y);//�����ֵ
		}

	}
	printQipan();

}
void blackPlay()
{

	printQipan();
	printf("\n��ڷ����ӣ����������е�����:");
	scanf("%d%d", &x, &y);//�����ֵ
	while (1)//���һֱ�´��ӵ�����
	{
		if (qipan[x][y] == '*')//���ӵĵط�û��������
		{
			qipan[x][y] = 'B';
			//���while(1)
			break;
		}
		else
		{
			printf("�����Ӵ���\n");
			printf("��ڷ����ӣ����������е�����:");
		}
		scanf("%d%d", &x, &y);//�����ֵ

	}
	printQipan();

}
void startGame()
{
	initQipan();
	printQipan();
	while (1)
	{
		whitePlay();
		if (showWhoWin() == 1)//system("pause");
			break;
		system("cls");//������Ļ,����Ļ�ϵ��ֲ��ظ�
		blackPlay();
		if (showWhoWin() == 1)//system("pause");
			break;
		system("cls");
		printQipan();
	}
	printf("���Ƿ�������Ϸ:y  or n");
	if (getchar() == 'n')
	{
		system("cls");
		printf("��Ϸ����\n");
		exit(0);//��Ϊ������ֹ
	}
	if (getchar() == 'y')
	{
		system("cls");
		startGame();
	}

}

int main()
{
	startGame();
	return 0;
}