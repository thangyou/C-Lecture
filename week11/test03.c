#include <stdio.h>
#include <math.h>
/**
 * 밑(x)과 지수(y)를 입력 받아 x^y를 구하여 반환하는 함수 만들고
 * main 함수에서 호출하여 출력하는 프로그램
 * 함수명 : my_power
*/

int my_power(int x, int y);

int main(void) {
    int x, y;
    int result;

    printf("밑과 지수 입력 : ");
    scanf("%d %d", &x, &y);
    result = my_power(x, y);
    printf("%d의 %d승은 %d입니다.", x, y, result);

    return 0;
}

int my_power(int x, int y) {
    // int result;
    // result = pow(x, y);

    int result = 1, i;
    for (i = 0; i < y; i++) {
        result *= x;
    }

    return result;
}