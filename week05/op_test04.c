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
    scanf("%lf %lf", &weight, &height);
    height = height / 100.0;
    BMI = weight / (height * height);
    printf("BMI : %.1lf\n", BMI);
    (BMI >= 20.0 && BMI < 25.0) ? printf("표준\n") : printf("체중관리 필요\n");

    /*
    체중과 키 입력 : 45 152.2
    BMI : 19.4
    체중관리 필요
    */
    return 0;
}