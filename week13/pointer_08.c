#include <stdio.h>

/**
 * 포인터와 배열
 * - 배열명으로 배열 요소 사용하기
 * : 배열 요소에 사용하는 대괄호는 연산자
 * : 포인터 연산의 간접 참조, 괄호, 더하기 연산 기능
 * 
 * - 배열명 역할을 하는 포인터
*/

int main(void) {
    int ary[3];
    int* pa = ary;
    int i;

    *pa = 10;
    *(pa + 1) = 20;
    pa[2] = pa[0] + pa[1];

    for(i = 0; i <3; i++) {
        printf("%5d", pa[i]);
    }
    return 0;
}