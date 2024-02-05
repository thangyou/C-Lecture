#include <stdio.h>

/**
 * 구조체 및 공용체
 * - 공용체
 * : 모든 멤버가 하나의 저장 공간을 같이 사용함
*/ 

union student
{
    int num;
    double grade;
};

int main(void) {
    union student s1 = { 315 };
    printf("학점 : %d\n", s1.num);
    s1.grade = 4.4;
    printf("학점 : %.1lf\n", s1.grade);
    printf("학번 : %d\n", s1.num);

    return 0;
}
