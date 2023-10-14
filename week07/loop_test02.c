#include <stdio.h>

/*
    양의 정수 n을 입력받아 1부터 n까지 짝수의 합 출력
*/
void main() {
    int num, sum = 0;

    printf("양의 정수 n을 입력하세요 : ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i=i+2) 
    {
        sum += i;
    }

    /*
        while(i <= n) {
            if (i % 2 == 0)
                sum += i;
            i++;
        }
    */

    printf("1에서 %d까지 짝수의 합은 %d입니다.", num, sum);
}