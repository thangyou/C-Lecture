#include <stdio.h>

void main() {
    int a = 5;

    int res1 = 0 || 1;               // 1
    int res2 = (a > 10) && (a < 20); // 0
    int res3 = !(a >= 10);           // 1

    printf("%d %d %d \n", res1, res2, res3); // 1 0 1 
}