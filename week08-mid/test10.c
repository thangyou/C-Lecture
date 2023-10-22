#include<stdio.h>
/*
    실행 결과는?
*/
void main() {
    int a = 7;
    int y1 = 0 || 1;
    int y2 = (a>5) && (a<15);
    int y3 = !(a>10);

    printf("결과 : %d, %d, %d", y1, y2, y3); 
    // 결과 : 1, 1, 1
    
}