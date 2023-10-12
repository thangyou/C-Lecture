#include <stdio.h>

/*
    체중과 키를 입력하여 BMI를 구한 후
    BMI 값이 20.0 이상 25.0 미만이면 "표준입니다.",
    아니면 "체중관리가 필요합니다." 를 출력함
    BMI = 체중 / (키의 제곱)
*/
int main(void) {
    double weight, height, BMI;

    printf("체중과 키 입력 : ");
    scanf("%d %d", &weight, &height);
    BMI = weight / (height * height);
    (BMI >= 20.0 && BMI < 25.0) ? printf("표준\n") : printf("체중관리 필요\n");

    return 0;
}