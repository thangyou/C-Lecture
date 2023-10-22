#include<stdio.h>
/*
    number 가 -30 이면 출력되는 값은?
    1) 출력결과가 없음
    2) 홀수
    3) 짝수음수
    4) 짝수
*/
void main() {
    int number = -30;

    if (number >= 0)
    {
        if (number % 2 == 0)
            printf("짝수");
        else 
            printf("음수");      
    }
    
}