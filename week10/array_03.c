#include <stdio.h>
#include <stdlib.h> // rand() 함수 포함 라이브러리
#include <time.h>   // time()함수 포함 라이브러리

/**
 * sizeof 연산자를 활용한 배열 처리
 * 배열 요소 수 : sizeof(배열명) / sizeof(배열 요소)
 *               배열 전체 크기 / 배열 요소 하나의 크기
*/

void main() {
    int score[5];
    int i, total = 0;
    double avg;
    int cnt = sizeof(score) / sizeof(score[0]);

    for (i = 0; i < cnt; i++)
    {
        printf("점수 입력 : ");
        scanf("%d", &score[i]);
        total += score[i];
    }

    avg = total / 5.0;

    for (i = 0; i < cnt; i++)
    {
        printf("%5d", score[i]);
    }
    printf("\n");

    printf("평균 : %.1f\n", avg);
    
    /*
    점수 입력 : 80
    점수 입력 : 95
    점수 입력 : 77
    점수 입력 : 84
    점수 입력 : 100
    80   95   77   84  100
    평균 : 87.2
    */
    
}