#include <stdio.h>

/* 2단 ~ 9단까지 출력 반복 */
void main() {
    int step, i;
    for (step = 2; step <= 9; step++) {
        printf("< %d단 >\n", step);
        for (i = 1; i <= 9; i++) {
            printf("%d * %d = %d\n", step, i, step*i);
        }
    }
    
}