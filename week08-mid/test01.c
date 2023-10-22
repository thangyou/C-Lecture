#include<stdio.h>

void main() {
    int test = 3;
    switch (test)
    {
    case 1:
        printf("a");
    case 2:
        printf("b");
    case 3:
        printf("c");
    default:
        printf("d");
    }
}