#include<stdio.h>
/*
    다음 프로그램의 반복 횟수는?
    cnt -> 101
*/
void main() {
    int index = 0, cnt = 0;
    while (index <= 100)
    {
        cnt++;
        ++index;
    }
    printf("%d \n", index);
    printf("%d \n", cnt);
    
}