#include <stdio.h>

/**
 * 열거형, 전처리 지시자
 * - 열거형(enumeration type)
 * : 변수에 저장할 수 있는 정수값을 기호로 정의하여 나열
 * : 상수들의 집합을 정수형으로 대신하여 표현함
*/ 

enum week {sun, mon, tue, wed, thu, fri, sat};

int main(void) {
    enum week day1;
    day1 = fri;
    printf("day1 : %d\n", day1);
    printf("fri : %d\n", fri);

    day1 = mon;
    printf("day1 : %d\n", day1);
    printf("mon : %d\n", mon);

    return 0;
}
