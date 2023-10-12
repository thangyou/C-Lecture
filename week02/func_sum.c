#include <stdio.h>

int Sum(int x, int y) {
    int result = x + y;
    return result;
}

int main(void) {
    int s;
    s = Sum(3, 5);
    printf("두 수의 합 : %d\n", s);
}