#include<stdio.h>
/*
    다음 while문을 for문으로 변경하면?
*/
void main() {
    int i = 0;
    while (i < 10)
    {
        printf("%d\n", i);
        i++;
    }

    printf("=============\n");

    int j;
    for (int j = 0; j < 10; j++)
    {
        printf("%d\n", j);
    }

}