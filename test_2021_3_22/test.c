#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	//上半部分
	for (i; i < n; i++)
	{
		int k = 0;
		//打印空格
		for (k; k < n-1-i; k++)
		{
			printf(" ");
		}
		//打印*
		k = 0;
		for (k; k < 2 * i + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	//下半部分
	i = 0;
	for (i; i < n-1; i++)
	{
		int k = 0;
		//打印空格
		for (k; k <= i; k++)
		{
			printf(" ");
		}
		k = 0;
		//打印*
		for (k; k <2*n-2*i-3 ; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}