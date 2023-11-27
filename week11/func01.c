#include <stdio.h>

int add(int x, int y);  // add 함수 선언

int main(void) {        // main 함수 시작
    int a = 10, b = 20;
    int res;

    res = add(a, b);    // add 함수 호출
    printf("result : %d\n", res);
    return 0;
}                       // main 함수 끝

int add(int x, int y) { // add 함수 정의
    int tmp;
    tmp = x + y;
    return tmp;
}                   