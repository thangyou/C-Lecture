#include <stdio.h>

struct score
{
    char name[20];
    int kor;
    int eng;
    int mat;
};

void print_sc(struct score* scpr);

int main(void) {
    struct score sc = {"newzone", 90, 80, 85};
    struct score* ps = &sc;
    print_sc(ps);

    return 0;
}

void print_sc(struct score* scpr) {
    printf("이름 : %s\n", scpr->name);
    printf("국어 : %d\n", scpr->kor);
    printf("영어 : %d\n", scpr->eng);
    printf("수학 : %d\n", scpr->mat);
}
