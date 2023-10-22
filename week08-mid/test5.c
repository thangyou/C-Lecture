#include<stdio.h>
/*
    다음 문장에서 while 문을 끝내려면 
    count 값이 가져야 될 값은?
    0
*/
void main() {
    int count;
    scanf("%d", &count);

    while (count)
    {
        printf("%d\n", count);
    }
    
}