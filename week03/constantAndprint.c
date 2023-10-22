#include <stdio.h>
#define PI 3.1416

void main() {
    
    putchar('P');
    putchar('I');
    puts("는 원주율입니다.");
    // PI는 원주율입니다.

    printf("원주율 : %.4f\n", PI); // 원주율 : 3.1416
    printf("반지름이 %d인 원의 넓이는 %.2f입니다.", 4, PI*4*4);
    // 반지름이 4인 원의 넓이는 50.27입니다.


    return;
}