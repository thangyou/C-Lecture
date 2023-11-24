#include <stdio.h>

/* 1부터 n까지 수 중 3의 배수의 합 구하기 */
void main() {
    int i, num, sum = 0;

    printf("정수 입력 : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (i % 3 == 0) sum += i; // (!(i%3))
    }

    printf("입력한 수 %d까지 3의 배수의 합 : %d", num, sum);
    /*
        정수 입력 : 20
        입력한 수 20까지 3의 배수의 합 : 63
    */

}