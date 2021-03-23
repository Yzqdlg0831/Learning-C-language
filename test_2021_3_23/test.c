#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//void reverse(char* left, char* right)
//{
//    int tmp = 0;
//    while (left < right)
//    {
//        tmp = *left;
//        *left = *right;
//        *right = tmp;
//        right--;
//        left++;
//    }
//}
//int main()
//{
//    char arr[100] = { 0 };
//    gets(arr);
//    int len = strlen(arr);
//    reverse(arr, arr + len - 1);
//    printf("%s", arr);
//    return 0;
//}

int main()
{
    int i = 0;
	int j = 0;
	int z = 0;
    scanf("%d", &i);
	j = i;
	z = i;
	while (j > 1)
	{
		z += j / 2;
		j = j / 2 + j % 2;
	}
	printf("%d", z);
	return 0;
}