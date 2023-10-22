#include<stdio.h>
/*
    while문의 루프 문은 몇 번 반복되는가?
    cnt -> 10
*/
void main() {
    int sum = 1;
    int x = 0, cnt = 0;
    while (sum <= 10)
    {
        sum += 1;
        x += 1;
        cnt += 1;
    }
    printf("%d\n", cnt);
    
}