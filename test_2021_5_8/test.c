#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a = 0, b = 0, c = 0, m;
    printf("��������������");
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
//	printf("����n��ֵ:");
//	scanf("%d", &n);
//	for (i; i <= n; i++)
//	{
//		k *= i;
//	}
//	printf("%d�Ľ׳���:%d",n,k);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char password[10] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);
//	//����һ�»�����
//	int ch = 0;
//	while((ch = getchar()) != '\n')
//	{
//	  ;
//	}
//	printf("��ȷ��Y/N");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
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
//			continue;//��i==5ʱ������ѭ������������
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