#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int N = 0;
    scanf("%d", &N);
    printf("%d %d", N - N / 2, N / 2);
    return 0;
}





//#include<stdio.h>
//int main()
//{
//    int a = 0, b = 0, c = 0;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        if (a + b > c && a + c > b && c + b > a)
//            if (a == b && a == c) printf("Equilateral triangle!\n");
//            else if (a == b || a == c || b == c) printf("Isosceles triangle!\n");
//            else printf("Ordinary triangle!\n");
//        else printf("Not a triangle!\n");
//    }
//    return 0;
//}



//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int a = 0, b = 0, c = 0;
//    double circumference, area, p;
//    scanf("%d %d %d", &a, &b, &c);
//    circumference = a + b + c;
//    p = circumference / 2.00;
//    area = sqrt(p * (p - a) * (p - b) * (p - c));
//    printf("circumference=%.2lf area=%.2lf", circumference, area);
//    return 0;
//}