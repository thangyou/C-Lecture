#include <stdio.h>

/**
 * 구조체 및 공용체
 * - 구조체 크기
 * 멤버의 순서에 따라 구조체의 크기가 달라지므로
 * 패딩 바이트가 가장 작도록 선언해야 메모리를 아낌!
 * 
 * - 구조체 멤버
 * 배열, 포인터, 다른 구조체도 멤버로 사용 가능
 * 
 * - 구조체 변수 초기화
 * 선언과 동시에 초기화 가능
*/ 

struct student
{
    int num;
    char name[20];
    double grade;
};

int main(void) {
    struct student s1 = { 1, "newzone", 2.4},
    s2 = {2, "newthang", 3.7},
    s3 = {3, "yudang", 4.4};

    struct student max;
    max = s1;
    if (s2.grade > max.grade) max = s2;
    if (s3.grade > max.grade) max = s3;
     
    printf("학번 : %d\n", max.num);
    printf("이름 : %s\n", max.name);
    printf("학점 : %.1lf\n", max.grade);

    return 0;
}
