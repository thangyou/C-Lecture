#include <stdio.h>

/**
 * 포인터와 주소의 차이
 * 1. 주소
 *  - 변수에 할당된 메모리 저장 공간의 시작 주소 값
 *  - 실행 중 특정 변수의 주소값은 바뀌지 않음
 * 2. 포인터
 *  - 변수의 주소를 저장하는 또 다른 메모리 공간
 *  - 다른 주소를 대입하여 그 값을 바꿀 수 있음
 * 
 * int a, b;    // 일반 변수 선언
 * int *p;      // 포인터 선언
 * p = &a;      // p가 a를 가리키도록 설정
 * printf("%d", p); // 6422036 -> a의 주소
 * p = &b;      // p가 b를 가리키도록 변경
 * printf("%d", p); // 6422032 -> b의 주소
 * 
 * 포인터와 주소의 크기
 * - 자료형과 관계없이 포인터와 주소의 크기는 같음
 * - sizeof 연산자로 확인
*/

void swap(int* pa, int* pb); 

int main(void) {
    int a = 10, b = 20;
    printf("swap 전 : a = %d b = %d\n", a, b);

    swap(&a, &b);   // a와 b의 주소를 인수로 넘김
    printf("swap 후 : a = %d b = %d\n", a, b);

    return 0;
}

void swap(int* pa, int* pb) {
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}