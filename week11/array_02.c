#include <stdio.h>

/**
 * 다차원 배열
 * 선언
 *  - 자료형 배열명[행][열];
 * 초기화
 *  - 자료형 배열명[행][열] = {{행1의값들}, {행2의값들}, ...};
*/

void main() {
    int score[3][4];    // 학생 3명의 과목 4개 점수 저장
    int total;          // 총점
    double avg;         // 평균
    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("네 과목 점수 입력 : ");
        for (j = 0; j < 4; j++) {
            scanf("%d", &score[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        total = 0; // 학생 바뀔 때마다 0으로 초기화
        for (j = 0; j < 4; j++) {
            total += score[i][j];
        }
        avg = total / 4.0;
        printf("총점 : %d, 평균 : %.2lf\n", total, avg);
    }

}