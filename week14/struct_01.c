#include <stdio.h>

/**
 * 구조체 및 공용체
 * - 구조체
 * 다양한 자료형을 하나로 묶을 수 있는 복합 자료형
 * 구조체의 형태를 컴파일러에게 미리 알려주는 형 선언 해야 함
 * 
*/

struct student
{
    int num;
    double grade;
};

int main(void) {
    struct student s1;
    s1.num = 2;
    s1.grade = 2.7;
    printf("학번 : %d\n", s1.num);
    printf("학점 : %.1lf\n", s1.grade);
    

    return 0;
}
