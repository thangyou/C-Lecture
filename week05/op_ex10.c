#include <stdio.h>

void main() {
    int a = 10; // 00001010
    int b = 12; // 00001100
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b); // 두 비트 다르면 1
    printf("~a = %d\n", ~a); // 모든 비트 반전 - 11110101
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 2 = %d\n", a >> 2);
    
    /*
    a & b = 8
    a | b = 14
    a ^ b = 6
    ~a = -11
    a << 1 = 20
    a >> 2 = 2
    */
   return;
}