#include <stdio.h>

/*
    3.76 시간은 몇 시간, 몇 분, 몇 초?
*/
int main(void) {
    int hour, min, sec;
    double time = 3.76;

    hour = (int)time; // 3
    time -= hour; // 0.76
    time *= 60.0; // 45.6 
    min = (int)time; // 45
    time -= min; // 0.6
    time *= 60.0; // 36.0
    sec = (int)time; // 36

    printf("3.76 시간은 %d시간 %d분 %d초입니다.\n", hour, min, sec);
    // 3.76 시간은 3시간 45분 35초입니다.

    return 0;
}