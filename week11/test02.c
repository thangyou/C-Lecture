#include <stdio.h>

/**
 * cm 를 m 단위로 변환하여 출력하는 프로그램
 * 함수명 : centi-to-meter
*/

double centi_to_meter(int x);

int main(void) {
    int cm;
    double result;

    printf("cm 입력 : ");
    scanf("%d", &cm);
    result = centi_to_meter(cm);
    printf("%dcm를 m로 변환 : %.2lfm", cm, result);

    return 0;
}

double centi_to_meter(int x) {
    double meter;
    meter = x / 100.0;

    return meter;
}