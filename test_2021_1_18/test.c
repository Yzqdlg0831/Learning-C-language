#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int left = 0, right = n-1, num = 0,ret=0;
	printf("��������Ҫ���ҵ����֣�");
	scanf("%d", &num);
	while (left <= right)
	{
		ret = (left + right) / 2;
		if (arr[ret] > num)
		{
			right = ret - 1;
		}
		else if (arr[ret] < num)
		{
			left = ret + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}