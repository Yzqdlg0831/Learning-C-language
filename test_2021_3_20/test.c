#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//void print(int* p,int m)
//{
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	print(arr,len);
//	return 0;
//}
//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//
//
//void fun(struct stu* p)
//{
//    printf("% s\n", (*p).name);
//    return;
//}
//
//
//int main()
//{
//    struct stu students[3] = { {9801,"zhang",20},
//                              {9802,"wang",19},
//                              {9803,"zhao",18}
//    };
//    fun(students + 1);
//    return 0;
//}
//int main()
//{
//    char str[100] = { 0 };
//    int i = 0;  
//    int n = 0;
//    while (scanf("%s", str[i]) != NULL)
//    {
//        i++;
//    }
// 
// 	for (n = 0; n < 10; i++)
// 	{
// 		printf("%d ", *(str + i));
// 	}
//    return 0;
//}
//int main()
//{
//	int i = 0, a = 0, sum = 0;
//	scanf("%d", & a);
//	int n = a;
//	for (i; i < 5; i++)
//	{
//		sum += n;
//		n = n * 10 + a;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	for (i; i <= 100000; i++)
//	{
//		int sum = 0;
//		int k = 0;
//		int tmp = i;
//		while (tmp > 0)
//		{
//			k++;
//			tmp=tmp / 10;
//		}
//		tmp = i;
//		while (tmp > 0)
//		{
//			sum += pow(tmp % 10, k);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//判断i是否为水仙花数
//		//1. 求判断数字的位数
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		//2. 计算每一位的次方和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		//3. 判断
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
int main()
{

	return 0;
}

//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//打印上半部分
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}