#include <stdio.h>

/*
    태희의 전체 신청 학점과 평점을 계산하여
    신청 학점이 10학점 이상이고, 평점 평균이 4.0을 넘는 경우
    1을 출력, 아니면 0을 출력하는 프로그램
    태희 성적
    국어 : 3학점 - 3.8
    영어 : 5학점 - 4.4
    수학 : 4학점 - 3.9
*/
int main(void) {
    int kor_cre = 3, eng_cre = 5, math_cre = 4, cre_sum, result = 0;
    double kor_gra = 3.8, eng_gra = 4.4, math_gra = 3.9;
    double grade;

    cre_sum = kor_cre + eng_cre + math_cre;
    grade = (kor_gra + eng_gra + math_gra) / 3.0;

    printf("cre_sum : %d\n", cre_sum); // 12
    printf("grade : %.2lf\n", grade); // 4.03

    result = (cre_sum >= 10) && (grade > 4.0);
    // result = (cre_sum >= 10) && (grade > 4.0) ? 1 : 0;
    
    printf("%d\n", result); // 1

    return 0;
}