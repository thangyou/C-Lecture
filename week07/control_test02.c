#include <stdio.h>

/*
    두 개의 정수를 입력 받아 큰 수와 작은 수 순으로 출력
*/
void main() {
    int max, min, a, b;

    printf("두 개의 정수를 입력하세요 : ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }
    printf("큰 수 : %d, 작은 수 : %d", max, min);

}