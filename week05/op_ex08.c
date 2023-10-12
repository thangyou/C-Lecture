#include <stdio.h>

void main() {
    int a = 10, b = 20, res = 2;

    a += 20;       // 10 + 20 = 30
    res *= b + 10; // 2 * (20 + 10)  = 60

    printf("a = %d, b = %d\n", a, b);
    printf("res = %d\n", res);
}