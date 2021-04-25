#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fibo(int n)
{
	int a = 1;
	int	b = 1;
	int c = 1;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	printf("你输入的数");
	scanf("%d", &n);
	fibo(n);
	printf("斐波那契值为：%d\n", fibo(n));
	return 0;
}


//#include<stdio.h>
//int  fac(int n)
//{
//	if (n < 2)
//	{
//		return 1;
//	}
//	else
//	{
//		n = n * fac(n - 1);
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入你的数字：\n");
//	scanf("%d", &n);
//	fac(n);
//	printf("他的阶乘为：%d\n", fac(n));
//	return 0;
//}


//#include<stdio.h>
//void recur(int n)
//{
//	if (n / 10 == 0)
//	{
//		printf("%d ", n);
//	}
//	else
//	{
//		recur(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入你要打印的整数：");
//	scanf("%d", &n);
//	recur(n);
//	return 0;
//}