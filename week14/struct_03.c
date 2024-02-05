#include <stdio.h>

/**
 * 구조체 및 공용체
 * - 구조체 포인터
 * 구조체 변수의 주소는 구조체 포인터에 저장하며,
 * 구조체 변수 전체를 가리킴
 * 
*/ 

struct score
{
    int kor;
    int eng;
    int mat;
};

int main(void) {
    struct score sc = { 90, 80, 85};
    struct score* ps = &sc;

    printf("국어 : %d\n", (*ps).kor);
    printf("영어 : %d\n", ps->eng);
    printf("수학 : %d\n", ps->mat);

    return 0;
}
