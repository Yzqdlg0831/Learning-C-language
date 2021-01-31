#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




void init(int arr[], int sz)//初始化数组为全0
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}


void print_arr(int arr[], int sz)//打印数组的每个元素
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


void reverse(int* arr, int sz)//数组元素的逆置
{
	int i = 0, t = 0;
	for (i = 0; i < sz / 2; i++)
	{
		t = arr[i];
		arr[i] = arr[sz - 1 - i];
		arr[sz - 1 - i] = t;
	}
}


int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//init(arr,sz);
	print_arr(arr, sz);
	reverse(arr, sz);
	print_arr(arr, sz);
	return 0;
}

//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	int len = sz - 1;
//	while(len>1)
//	{
//		int k = 1;
//		int tmp = 0;
//		for (i = 0; i < len - 1; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				tmp = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = tmp;
//				k = 0;//判断是否排序完成
//			}
//		}
//		len = len - 1;
//		if (k)
//		{
//			break;
//		}
//	} 
//}
//void print_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 5,6,3,2,8,9,4,1,7,10,11,13,12 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	print_arr(arr,sz);
//	return 0;
//}