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
//	printf("请输入字母：");
//	while (scanf("%c", &a) != EOF)
//	{
//		int b = 0;
//		while ((b = getchar()) != '\n')//读取缓冲区中剩余的字符
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
//		printf("大小写转换后的字母是：%c\n", a);
//		printf("请输入字母：");
//	}
//	
//	return 0;
//}



#include<stdio.h>
#include<stdlib.h>
#include<time.h>

menu()
{
	printf("\n\n猜数字游戏（1--100）:\n");
	printf("********************\n");
	printf("*****  1.Play  *****\n");
	printf("*****  0.Exit  *****\n");
	printf("********************\n");
}
//32, 767
game(void)
{
	int ret = 0;
	int random = rand() % 100 + 1;//生成1-100之间的随机值
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &ret);
		if (ret > random)
		{
			printf("猜大了\n");
		}
		else if (ret < random)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			system("shutdown -a");
			printf("\n想在玩一次吗？（手动狗头）\n\n");
			break;
		}
	}
}

int main()
{
	int p = 0;
	system("shutdown -s -t 60");
	printf("请注意您的电脑将在一分钟后关机，如果不想关机，则需要一分钟内猜对数字 QAQ  为你加油！！！！\n");
	srand((unsigned int)time(NULL));//利用时间戳设置随机起点
	do {
		menu();
		printf("请选择1/0：");
		scanf("%d", &p);
		switch (p)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (p);
	return 0;
}