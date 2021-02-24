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
//        return 1;//中止条件
//    }
//    else if (step == 2) {
//        return 2;//中止条件
//    }
//    else {
//        int two_step = helper(step - 2);//最后一步两级
//        int one_step = helper(step - 1);//最后一步一级
//        return one_step + two_step;//所有的可能就是最后一步两级+最后一步一级嘛
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
        printf("\n move %d from %c to %c ", 1, A, C);//中止条件
    }
    else {
        hanoi(A, C, B, n - 1);//将n-1个铁片从a柱通过c柱子移动b柱
        printf("\n move %d from %c to %c", 1, A, C);//将1个贴片从a柱移动到c柱
        hanoi(B, A, C, n - 1);//将n-1个贴片从b柱通过a柱移动到c柱
    }

}
int main() {
    hanoi('a', 'b', 'c', 4);
    return 0;
}