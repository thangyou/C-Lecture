#include <stdio.h>

void main() {
    int a = 10, b = 5;
    double res;

    res = ((double)a / (double)b);
    printf("a = %d, b = %d\n", a, b);
    printf("a/b의 결과 %.1f\n", res);

    a = (int)res;
    printf("<int>%.1lf의 결과 %d\n", res, a);
}