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
	printf("���������");
	scanf("%d", &n);
	fibo(n);
	printf("쳲�����ֵΪ��%d\n", fibo(n));
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
//	printf("������������֣�\n");
//	scanf("%d", &n);
//	fac(n);
//	printf("���Ľ׳�Ϊ��%d\n", fac(n));
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
//	printf("��������Ҫ��ӡ��������");
//	scanf("%d", &n);
//	recur(n);
//	return 0;
//}