#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()

{

	printf("���ˮ�ɻ�����\n");

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
//	//%d ��ʾ��ӡ��������
//	//sizeof   ��C���Ե�һ��������
//	//sizeof������Ƕ�Ӧ���͵ı�����ռ�ڴ�Ĵ�С
//	//sizeof ���������ĵ�λ�ǣ��ֽ�
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