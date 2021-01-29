#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//将数组内元素反向排列
void reverse_string(char* arr)
{
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr + len - 1);

	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)
		reverse_string(arr + 1);

	*(arr + len - 1) = tmp;
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}

//int Fib2(int n)//递归实现
//{
//	if (n > 2)
//	{
//		return Fib2(n - 1) + Fib2(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int Fib1(int n)//迭代实现
//{
//	int a = 1;//第一个斐波那契数
//	int b = 1;//第二个斐波那契数
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n%d", Fib1(n), Fib2(n));
//	return 0;
//}

//int  my_pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * my_pow(n, k - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n = 0, k = 0;
//	printf("请输入两个数计算n的k次方：");
//	scanf("%d %d", &n, &k);
//	printf("%d", my_pow(n, k));
//	return 0;
//}

//int DigitSum(int n)//计算一个数的每位之和（递归实现）
//{
//	if (n > 9)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//    printf("%d",DigitSum(n));
//	return 0;
//}

//int my_strlen2(char* p)//迭代实现
//{
//	int coumt = 0;//计数器
//	while (*p != '\0')
//	{
//		coumt++;
//		p++;
//	}
//	return coumt;
//}
//
//int my_strlen1(char* p) //递归实现
//{
//	if (*p != '\0')
//	{
//		return 1 + my_strlen1(p + 1);
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret1 = my_strlen1(arr);
//	int ret2 = my_strlen2(arr);
//	printf("%d\n%d", ret1,ret2);
//	return 0;
//}


//int Factorials(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return (n * Factorials(n - 1));
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n",Factorials(n));
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}

//int main()
//{
//	int n = 0;
//    scanf("%d", &n);
//	print(n);
//	return 0;
//}