#include <stdio.h>

/**
 * char형 다차원 배열  
 * char ary[3][20] = {"lion", "tiger", "dog"};
*/
void main() {
    char fruit[4][20];
    int i, cnt;

    cnt = sizeof(fruit) / sizeof(fruit[0]); // 행의 수 계산
    printf("좋아하는 과일 4개를 차례로 입력 \n");
    for (i = 0; i < cnt; i++) {
        scanf("%s", &fruit[i]);
    }
    
    for (i = 0; i < cnt; i++) {
        printf("%s ", fruit[i]);
    }
}