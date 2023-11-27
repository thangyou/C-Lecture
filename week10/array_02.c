#include <stdio.h>
#include <stdlib.h> // rand() 함수 포함 라이브러리
#include <time.h>   // time()함수 포함 라이브러리

/**
 * 배열 초기화
 * - 중괄호로 묶어서 초기화하며, 최초 한 번만 가능
 * - 자료형 배열명[요소 개수] = {초기값};
 * - 요소 개수보다 초기값이 적으면 나머지는 모두 0으로 채움
 * - 요소 개수 생략하면 초기값 만큼 배열 요소 수 할당
*/

void main() {
    int score[5];
    int i, total = 0;
    double avg;

    for (i = 0; i < 5; i++)
    {
        printf("점수 입력 : ");
        scanf("%d", &score[i]);
        total += score[i];
    }

    avg = total / 5.0;

    for (i = 0; i < 5; i++)
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