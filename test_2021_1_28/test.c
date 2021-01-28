#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>


//#include <stdio.h>
//int main()
//{
//    int y = 0;
//    int m = 0;
//    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    while (scanf("%d%d", &y, &m) != EOF)
//    {
//        int day = days[m - 1];
//        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//        {
//            if (m == 2)
//                day += 1;
//        }
//        printf("%d\n", day);
//    }
//    return 0;
//}

#include<stdio.h>
int main()
{
    int year = 0, months = 0;
    while (scanf("%d %d", &year, &months) != EOF)
    {
        if (months == 1 || months == 3 || months == 5 || months == 7 || months == 8 || months == 10 || months == 12)
        {
            printf("%d", 31);
        }
        else if (months == 4 || months == 6 || months == 9 || months == 11)
        {
            printf("%d", 30);
        }
        else if (months == 2)
        {
            if (((year % 100 != 0) && (year % 4 == 0)) || (year % 400 == 0))
            {
                printf("%d", 29);
            }
            else
            {
                printf("%d", 28);
            }
        }
        else
        {
            ;
        }
    }
    
    return 0;
}
//int MAX(int a, int b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	return b;
//}
//int MIN(int a, int b)
//{
//	if (a > b)
//	{
//		return b;
//	}
//	return a;
//}
//
//int main()
//{
//	int i = 0, ret = 0, m = 0, n = 100, num = 0, sum = 0;
//	for (i; i < 7; i++)
//	{
//		scanf("%d", &num);
//		sum += num;
//		m = MAX(num, m);
//		n = MIN(num, n);
//	}
//	printf("%.2f", (sum-n-m)/5.0);
//	return 0;
//}
//void multiplication_table(int n)
//{
//	int i = 1;
//	for (i = 1; i <= n; i++)
//	{
//		int k = 1;
//		for (k = 1; k <= i; k++)
//		{
//			printf("%d×%d=%-3d\t", i, k, i * k);
//		}
//		printf("\n");
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入需要打印的乘法表：");
//	scanf("%d", &n);
//	multiplication_table(n);
//	return 0;
//}

//void swap_two_numbers(int* p, int* q)
//{
//	int ret = 0;
//	ret = *p;
//	*p = *q;
//	*q = ret;
//}
//int main()
//{
//	int a = 0, b = 0;
//	printf("a=");
//	scanf("%d", &a);
//	printf("\nb=");
//	scanf("%d", &b);
//	swap_two_numbers(&a, &b);
//	printf("\na=%d\n\nb=%d\n", a, b);
//	return 0;
//}


//binray_search(int arr[] , int k , int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int ret = (left + right) / 2;
//		if (arr[ret] < k)
//		{
//			left = ret + 1;
//		}
//		else if (arr[ret] > k)
//		{
//			right = ret - 1;
//		}
//		else
//		{
//			return ret;
//		}
//	}
//	return (-1);
//}
//
//int main()
//{
//	int k = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("请输入一个要查找的数：");
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binray_search(arr , k , sz);
//	if (ret == -1)
//	{
//		printf("没有找到");
//	}
//	else
//	{
//		printf("找到了，下标是：%d", ret);
//	}
//	return 0;
//}

//
//is_leap_year(int year)
//{
//	if ((year % 100 != 0 && year % 4 == 0) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//			printf("%d  ", year);
//	}
//    return 0;
//}


//int is_prime(int i)
//{
//	int k = 0;
//		for (k = 2; k <= sqrt(i); k++)
//		{
//			if (i % k == 0)
//				return 0;
//		}
//			return 1;
//}
//
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}