#include <stdio.h>

/**
 * const 예약어 사용한 포인터
 * - 가리키는 변수의 값 바꿀 수 X
*/

int main(void) {
    int a= 10, b = 20;
    const int *pa = &a; // *pa == 10

    printf("변수 a의 값 : %d\n", *pa);

    pa = &b;            // b의 주소값 저장
    printf("변수 b의 값 : %d\n", *pa); // b가 가리키는 값 = 20

    pa = &a;            // a의 주소값 저장
    a = 20;             // a의 변수가 저장하는 값 저장 10 -> 20
    printf("변수 a의 값 : %d\n", *pa);  // a가 가리키는 값 = 20

    return 0;
}

/*
    변수 a의 값 : 10
    변수 b의 값 : 20
    변수 a의 값 : 20
*/