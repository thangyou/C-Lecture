#include <stdio.h>

/*
    거리(km)와 속력(km/h)을 입력 받은 후에 시간을 계산하여 출력
    - 거리와 속력을 입력 받는 변수는 int형으로 선언
    - 시간, 분을 저장할 변수도 int형으로 선언
    - 초는 소수점 이하 셋째 자리까지 출력
*/
int main(void) {
    int hour, min;
    int distance, speed, rest;
    double sec;

    printf("거리와 속력을 입력하세요 : ");
    scanf("%d %d", &distance, &speed);
    // distance = 435;
    // speed = 80;
    
    hour = distance / speed;
    rest = distance % speed;
    min = (rest * 60) / speed;
    rest = (rest * 60) % speed;
    sec = (rest * 60) / speed;

    printf("소요 시간은 %d시간 %d분 %.2lf초입니다.\n", hour, min, sec);
    // 소요 시간은 5시간 26분 15.00초입니다.

    return 0;
}