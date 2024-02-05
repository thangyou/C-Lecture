#include <stdio.h>

/**
 * 포인터와 배열
 * - 배열과 포인터의 차이
 * 1. sizeof 함수 사용 결과의 차이
 *  배열명 : 배열 전체의 크기
 *  포인터 : 포인터 하나의 크기
 *  int ary[3];       sizeof(ary) => 12Byte
 *  int *pa = ary;    sizeof(pa)  => 4Byte
 * 2. 변수와 상수의 차이
 *  포인터는 그 값을 바꿀 수 있음
 *  배열명은 상수이므로 값 변경 불가
*/

int main(void) {
    int ary[3] = { 10, 20, 30};
    int* pa = ary;
    int i;

    printf("배열의 값 : ");
    for(i = 0; i <3; i++) {
        printf("%d ", *pa);
        pa++;
    }
    return 0;
}