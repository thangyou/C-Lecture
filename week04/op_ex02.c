#include <stdio.h>

int main(void) {
    int a = 10, b = 10, c = 10, d = 10;

    ++a; // a = a + 1
    --b; // b = b - 1
    c++;
    d--;

    printf("a:%d, b:%d, c:%d, d:%d\n", a, b, c, d);
    // a:11, b:9, c:11, d:9

    return 0;
}