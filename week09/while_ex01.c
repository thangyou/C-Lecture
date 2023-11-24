#include <stdio.h>

/* 입력 받은 성적의 평균 구하기 */
int main() {
    int score, cnt = 0, sum = 0, avg;

    printf("점수 입력(-1은 종료) : ");
    scanf("%d", &score);

    while (score != -1)
    {
        cnt++;
        sum += score;
        printf("점수 입력(-1은 종료) : ");
        scanf("%d", &score);
    }

    avg = sum / cnt;
    printf("\n평균 : %d\n", avg);

    return 0;
    /*
    점수 입력(-1은 종료) : 55
    점수 입력(-1은 종료) : 66
    점수 입력(-1은 종료) : 77
    점수 입력(-1은 종료) : 88
    점수 입력(-1은 종료) : -1

    평균 : 71
    */
}