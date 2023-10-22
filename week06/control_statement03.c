#include <stdio.h>

void main() {
    int score = 92;
    char grade;

    if (score >= 90) {
        grade = 'A';
        printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);
    } else {
    grade = 'B';
        printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);    
    }
    printf("작업 종료\n");

    /*
    점수는 92이고 등급은 A입니다.
    작업 종료
    */
   return;
}
