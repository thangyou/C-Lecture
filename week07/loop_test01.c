#include <stdio.h>

/*
    양의 정수 n을 입력받아 1부터 n까지 홀수의 합 출력
*/
void main() {
    int num, sum = 0;

    printf("양의 정수 n을 입력하세요 : "); // 16
    scanf("%d", &num);

    for (int i = 1; i <= num; i=i+2) 
    {
        sum += i;
    }

    /*
        for (int i = 1; i <= num; i++) {
            if (i % 2 == 1)
                sum += i;
        }
    */

    printf("1에서 %d까지 홀수의 합은 %d입니다.", num, sum);
    // 1에서 16까지 홀수의 합은 64입니다.
}