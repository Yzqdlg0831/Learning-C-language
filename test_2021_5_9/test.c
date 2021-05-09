#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
int main()
{
	int a = 1, b = 1;
	printf("9×9乘法口诀：\n");
	for (a; a <= 9; a++)                         //1-- >在%和d之间加上数字宽度           （右对齐）
	{                                            //数字宽度为2，如果要打印的位数小于2，左边补足空格；
		printf("              ");                //如果要打印的位数大于2，则打印所有的数字，不会截断。
		for (b = 1; b <= a; b++)
		{                                        //2-- >在打印数字宽度前面加一个“-”     (左对齐）
			printf("%d×%d=%-2d  ", a, b, a * b);//数字宽度为2，如果要打印的位数小于2，则在后面补足空格；
		}                                        //如果要打印的位数大于2，则打印所有的数字，不会截断。		
		printf("\n");
	}
	return 0;
}

//#include<stdio.h>//有点激动！！！！！
//int main()
//{
//	int arr[10] = { 0 }, i = 0,MAX;
//	printf("请输入十个数：\n");
//	for (i; i < 10; i++)
//	{
//		printf("第%d个数:", i+1);
//		scanf("%d", arr + i);
//	}
//	i = 1;
//	MAX = arr[0];
//	for (i; i < 10; i++)
//	{
//		if (arr[i] > MAX)
//			MAX = arr[i];
//	}
//	printf("\n最大的数是：%d", MAX);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	double sum = 0.0,k=1.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += k/i;
//		k = -k;
//	}
//	printf("1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值：");
//	printf("%lf", sum);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int N = 1, a = 0,k = 0;
//	while (N < 100)
//	{
//		a = N;
//		while (a != 0)
//		{
//			if (a % 10 == 9)
//				k++;
//			a /= 10;
//		}
//		N++;
//	}
//	printf("0-100之间9出现的次数：");
//	printf("%d", k);
//	return 0;
//}



//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        int j = 0;
//        for (j = 2; j <= sqrt(i); j++)
//        {
//            if (i % j == 0)
//                break;
//        }
//        if (j > sqrt(i))
//        {
//            count++;
//            printf("%d ", i);
//        }
//    }
//    printf("\ncount=%d", count);
//    system("pause");
//    return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 100,k;
//	printf("100-200之间的素数：\n");
//	for (n; n <= 200; n++)
//	{
//		for(k=2;k<=sqrt(n)+1;k++)
//		{
//			if (n % k == 0)
//			{
//				break;
//			}
//		}
//			if (k > sqrt(n))
//			{
//				printf("%d ", n);
//			}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	long i = 1000;
//	printf("1000-2000之间的闰年:\n");
//	for (i; i <= 2000; i++)
//	{
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//			printf("%d  ", i);
//	}
//	return 0;
//}



//# include <stdio.h>
//
//int main()
//{
//	int a, b, c;
//		printf("输入两个数字求最大公约数：");
//		scanf("%d%d", &a, &b);
//		c = a % b;
//		while (c != 0)
//		{
//			a = b;
//			b = c;
//			c = a % b;
//		}
//		printf("最大公约数为：%d\n", b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	printf("1--100之间三的倍数:\n");
//	for (i; i <= 100; i++)
//	{
//		if (0==i%3)
//			printf("%d ", i);
//	}
//	printf("\n");
//	return 0;
//}