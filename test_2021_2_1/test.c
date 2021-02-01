#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 6,7,8,9,10 };
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}
	for (i = 0; i < 5; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	printf("\n交换后：\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}
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