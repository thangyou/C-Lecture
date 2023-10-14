#include <stdio.h>

/*
    세 개의 정수를 입력 받아 가장 큰 정수 출력
*/
void main() {
    int a, b, c, max;

    printf("세 개의 정수를 입력하세요 : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        if (a > b) max = a;
        else max = b; 
    } else if (b > c) { 
        max = b;
    } else { 
        max = c;
    }

    printf("가장 큰 수 : %d", max);

}