#include <stdio.h>

/*
    편의점에서 컵라면 2개와 초코바 3개를 사고 6000원 냈을 때,
    거스름 돈의 액수와 동전의 최소 개수를 출력함.
    컵라면은 1500원, 초코바는 950원임.
*/
int main(void) {
    int cupramen = 1500, chocoba = 950, change, total, rest;
    int m500, m100, m50;

    // cupramen *= 2;              // 3000
    chocoba *= 3;               // 2850
    total = cupramen + chocoba; // 5850
    change = 6000 - total;      // 150
    m500 = change / 500;
    m100 = change % 500 / 100;
    m50 = change % 500 % 100 / 50;


    printf("컵라면 전체 금액 : %d\n", cupramen);
    printf("초코바 전체 금액 : %d\n", chocoba);
    printf("거스름돈 : %d\n", change);
    printf("거스름돈 동전의 최소 개수 ... \n");
    printf("500원 %d개, 100원 %d개, 50원 %d개\n", m500, m100, m50);


    return 0;
}