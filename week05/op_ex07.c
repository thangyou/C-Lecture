#include <stdio.h>

void main() {
    int a = 10;
    double b = 3.14;

    printf("int형 변수의 크기 %d\n", sizeof(a));        // 4
    printf("double형 변수의 크기 %d\n", sizeof(b));     // 8
    printf("정수형 상수의 크기 %d\n", sizeof(10));      // 4
    printf("수식 결과값의 크기 %d\n", sizeof(1.5+2.6)); // 8
    printf("char 자료형의 크기 %d\n", sizeof(char));    // 1

    /*
    int형 변수의 크기 4
    double형 변수의 크기 8
    정수형 상수의 크기 4
    수식 결과값의 크기 8
    char 자료형의 크기 1
    */
   return;
}