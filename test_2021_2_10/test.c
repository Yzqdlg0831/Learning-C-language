#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()

{

	printf("输出水仙花数：\n");

	int i = 100;

	for (; i < 1000; i++) {

		int num_0 = i % 10;

		int num_1 = i / 10 % 10;

		int num_2 = i / 10 / 10 % 10;

		if (i == (num_0 * num_0 * num_0 + num_1 * num_1 * num_1 + num_2 * num_2 * num_2))

			printf("%d\t", i);

	}

	return 0;

}




//#include<stdio.h>
//int main()
//{
//	//%d 表示打印整形数字
//	//sizeof   是C语言的一个操作符
//	//sizeof计算的是对应类型的变量所占内存的大小
//	//sizeof 计算机结果的单位是：字节
//	//
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//
//	return 0;
//}