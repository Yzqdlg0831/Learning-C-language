#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int i;
//	int fact(int);
//	for (i = 0; i < 6; i++) {
//		printf("%d!=%d\n", i, fact(i));
//	}
//}
//int fact(int j)
//{
//	int sum;
//	if (j == 0) {
//		sum = 1;
//	}
//	else {
//		sum = j * fact(j - 1);
//	}
//	return sum;
//}


#include <stdio.h>
#include <stdlib.h>
int num(int n) {
	int i;
	for (i = 2; i <= n - 1; ++i) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}



int main() {
	int x = 0;
	scanf("%d", &x);
	if (num(x)) {
		printf("是素数\n");
	}
	else
	{
		printf("不是素数\n");
	}
	return 0;
}