#include <stdio.h>

void main() {
    int data1 = 5, data2 = 3;

    int res1 = data1 > 7;       // 0
    int res2 = data2 <= data1;  // 1
    int res3 = data2 == 7;      // 0
    int res4 = data2 != data1;  // 1

    printf("%d %d %d %d\n", res1, res2, res3, res4);
}