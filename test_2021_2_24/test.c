#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int helper(int chocolate, int limit) {
//    if (chocolate == 0) {
//        return 1;
//    }
//    else if (chocolate < 0) {
//        return 0;
//    }
//    else if (limit == 0) {
//        return 0;
//    }
//    else {
//        int with_it = helper(chocolate - limit, limit);
//        int without_it = helper(chocolate, limit - 1);
//        return with_it + without_it;
//    }
//}
//int main() {
//    printf("%d", helper(6, 4));
//    return 0;
//}
//#include <stdio.h>
//int helper(int step) {
//    if (step == 1) {
//        return 1;//��ֹ����
//    }
//    else if (step == 2) {
//        return 2;//��ֹ����
//    }
//    else {
//        int two_step = helper(step - 2);//���һ������
//        int one_step = helper(step - 1);//���һ��һ��
//        return one_step + two_step;//���еĿ��ܾ������һ������+���һ��һ����
//    }
//}
//int main() {
//    printf("%d", helper(5));
//    return 0;
//}


#include<stdio.h>
void hanoi(char A, char B, char C, int n)
{
    if (n == 1) {
        printf("\n move %d from %c to %c ", 1, A, C);//��ֹ����
    }
    else {
        hanoi(A, C, B, n - 1);//��n-1����Ƭ��a��ͨ��c�����ƶ�b��
        printf("\n move %d from %c to %c", 1, A, C);//��1����Ƭ��a���ƶ���c��
        hanoi(B, A, C, n - 1);//��n-1����Ƭ��b��ͨ��a���ƶ���c��
    }

}
int main() {
    hanoi('a', 'b', 'c', 4);
    return 0;
}