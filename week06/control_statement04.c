#include <stdio.h>

void main() {
    int score = 92;
    char grade;

    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';
    printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);
}
