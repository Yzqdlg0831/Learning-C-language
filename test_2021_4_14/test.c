#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//	int a = 0, b = 0, c = 0;
//
//	while (scanf("%d %d %d", &a, &b, &c)!=EOF)
//	{
//		int MAX = 0;
//		if (a > b)
//		{
//			MAX = a;
//		}
//		else MAX = b;
//		if (MAX < c)
//		{
//			MAX = c;
//		}
//		printf("%d", MAX);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char a = 0;
//	printf("��������ĸ��");
//	while (scanf("%c", &a) != EOF)
//	{
//		int b = 0;
//		while ((b = getchar()) != '\n')//��ȡ��������ʣ����ַ�
//		{
//			;
//		}
//		if (a <= 90 && a >= 65)
//		{
//			a = a + 32;
//		}
//		else if (a <= 122 && a >= 97)
//		{
//			a = a - 32;
//		}
//		printf("��Сдת�������ĸ�ǣ�%c\n", a);
//		printf("��������ĸ��");
//	}
//	
//	return 0;
//}



#include<stdio.h>
#include<stdlib.h>
#include<time.h>

menu()
{
	printf("\n\n��������Ϸ��1--100��:\n");
	printf("********************\n");
	printf("*****  1.Play  *****\n");
	printf("*****  0.Exit  *****\n");
	printf("********************\n");
}
//32, 767
game(void)
{
	int ret = 0;
	int random = rand() % 100 + 1;//����1-100֮������ֵ
	while (1)
	{
		printf("������֣�");
		scanf("%d", &ret);
		if (ret > random)
		{
			printf("�´���\n");
		}
		else if (ret < random)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			system("shutdown -a");
			printf("\n������һ���𣿣��ֶ���ͷ��\n\n");
			break;
		}
	}
}

int main()
{
	int p = 0;
	system("shutdown -s -t 60");
	printf("��ע�����ĵ��Խ���һ���Ӻ�ػ����������ػ�������Ҫһ�����ڲ¶����� QAQ  Ϊ����ͣ�������\n");
	srand((unsigned int)time(NULL));//����ʱ�������������
	do {
		menu();
		printf("��ѡ��1/0��");
		scanf("%d", &p);
		switch (p)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (p);
	return 0;
}