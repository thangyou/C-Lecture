#include <stdio.h>

/* 1부터 n까지 정수의 합 (while문) */
int main() {
    int i = 1, n, sum = 0;

    printf("종료값을 입력하세요 : ");
    scanf("%d", &n);
    
    // while (i <= n)
    // {
    //     sum += i;
    //     i++;
    // }

    // break문 사용
    while(1) 
    {
        sum += i;
        if (i == n) break;
        i++;
    }
    
    printf("1부터 %d까지의 합은 %d", n, sum);
    /*
    종료값을 입력하세요 : 10
    1부터 10까지의 합은 55
    */
}