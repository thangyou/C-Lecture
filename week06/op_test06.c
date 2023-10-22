#include <stdio.h>

/*
    소극장의 좌석수가 70개고, 입장객 수가 65명일 때 입장률?
*/
int main(void) {
    int seat = 70;
    int audience = 65;
    double seatRate;

    seatRate = (double) audience / (double) seat * 100.0;

    printf("입장률 : %.1lf%%\n", seatRate); // % -> %%
    // 입장률 : 92.9%

    return 0;
}