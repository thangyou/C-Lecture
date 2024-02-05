#include <stdio.h>

/**
 * 열거형, 전처리 지시자
 * - typedef를 사용한 형 재정의
 * 
*/ 

// 1. 구조체 사용
struct student
{
    int num;
    double grade;
};

void print_data(struct student* ps);

// 2. typedef 사용
// typedef struct student Student;
// void print_data(Student ps);


int main(void) {
    struct student s1 = { 315, 4.2 };
    // Student s1 = { 315, 4.2 };
    print_data(&s1);
    return 0;
}

void print_data(struct student* ps) {
    printf("학번 : %d\n", ps->num);
    printf("학점 : %.1lf\n", ps->grade);
}

// void print_data(Student* ps) {
//     printf("학번 : %d\n", ps->num);
//     printf("학점 : %.1lf\n", ps->grade);
// }