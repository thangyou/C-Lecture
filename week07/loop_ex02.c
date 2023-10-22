#include <stdio.h>

void main() {
    int sum = 0, num = 1;

    while (num <= 5)
    {
        printf("num(%d) + sum(%d) = ", num, sum);
        sum += num;
        printf("%d\n", sum);
        num++;
    }
    
    printf("\nResult : num = %d , sum = %d\n", num, sum);

    /*
    num(1) + sum(0) = 1
    num(2) + sum(1) = 3 
    num(3) + sum(3) = 6
    num(4) + sum(6) = 10
    num(5) + sum(10) = 15
    Result : num = 6 , sum = 15
    */
}