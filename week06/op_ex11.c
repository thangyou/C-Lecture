#include <stdio.h>

void main() {
    int a = 10, b = 5;
    int res;

    res = a / b * 2;
    printf("res = %d\n", res); // 4
    res = ++a * 3; // 전위 (a = a + 1 -> a * 3)
    printf("res = %d\n", res); // 30 -> 33
    res = a > b && a != 5;
    printf("res = %d\n", res); // 1
    res = a % 3 == 0;
    printf("res = %d\n", res); // 0

    /*
    res = 4
    res = 33
    res = 1
    res = 0
    */

    return;
}