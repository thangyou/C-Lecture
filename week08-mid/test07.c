#include<stdio.h>
/*
    result의 값은?
*/
void main() {
    int result = 1;
    for (int i = 1; i <= 4; i++)
    {
        result += 2;
    }
    result = result * 2;

    printf("%d\n", result);
    // 18
    
}