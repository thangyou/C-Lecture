#include <stdio.h>

int main(void){
    int a = 10, b = 15, total;
    double avg;
    int* pa, * pb;      // 포인터(주소값) 선언
    int* pt = &total;   // total의 주소가 가리키는 값
    double* pg = &avg;  // avg의 주소가 가리키는 값

    pa = &a;            // 포인터에 a의 주소 대입
    pb = &b;            // 포인터에 b의 주소 대입

    *pt = *pa + *pb;    // 25
    // pa는 a의 주소값이 가리키는 값 = 10
    // pb는 b의 주소값이 가리키는 값 = 15
    *pg = *pt / 2.0;    // 25 / 2.0 = 12.5

    printf("두 정수의 값 : %d, %d\n", *pa, *pb);
    printf("두 정수의 합 : %d\n", *pt);
    printf("두 정수의 평균 : %.1lf\n", *pg);

    return 0;
}

/*
    두 정수의 값 : 10, 15
    두 정수의 합 : 25
    두 정수의 평균 : 12.5
*/