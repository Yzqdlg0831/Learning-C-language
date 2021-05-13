#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a = 0, b = 0, c = 0, m;
    printf("请输入三个数：");
    scanf("%d %d %d", &a, &b, &c);
    if (a < b)
    {
        m = a;
        a = b;
        b = m;
    }
    if (a < c)
    {
        m = a;
        a = c;
        c = m;
    }
    if (b < c)
    {
        m = b;
        b = c;
        c = m;
    }
    printf("%d %d %d\n", a, b, c);
    return 0;
}


//#include<stdio.h>
//int main()
//{
//	int i = 0,ret=1,sum=0;
//	for (i = 1; i <= 3; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1, k = 1,m = 1,sum = 0;
//	for (m; m <= 3; m++)
//	{
//		k = 1;
//		for (i=1; i <= m; i++)
//		{
//			k *= i;
//		}
//		sum += k;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1, n = 0,k=1;
//	printf("输入n的值:");
//	scanf("%d", &n);
//	for (i; i <= n; i++)
//	{
//		k *= i;
//	}
//	printf("%d的阶乘是:%d",n,k);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char password[10] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);
//	//清理一下缓冲区
//	int ch = 0;
//	while((ch = getchar()) != '\n')
//	{
//	  ;
//	}
//	printf("请确认Y/N");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//当i==5时进入死循环！！！！！
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}






//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	for (i; i <= 100; i++)
//	{
//		if (0 !=i % 2 )
//			printf("%d ", i);
//	}
//	printf("\n");
//	return 0;
//}