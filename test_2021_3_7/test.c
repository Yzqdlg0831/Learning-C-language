#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int a, b, j, m, n;
	scanf("%d%d", &a, &b);
	if (a < b)
	{
		j = b;
		b = a;
		a = j;
	}
	return 0;
}