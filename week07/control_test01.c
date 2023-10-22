#include <stdio.h>

/*
    두 개의 정수를 입력 받아 큰 수와 작은 수 순으로 출력
*/
void main() {
    int max, min, tmp;

    printf("두 개의 정수를 입력하세요 : ");
    scanf("%d %d", &max, &min); // 10 12

    if (max < min) {
        tmp = max;
        max = min;
        min = tmp;
        printf("tmp : %d, max : %d, min : %d\n", tmp, max, min);
        // tmp : 10, max : 12, min : 10
    }
    printf("큰 수 : %d, 작은 수 : %d", max, min);
    // 큰 수 : 12, 작은 수 : 10
}