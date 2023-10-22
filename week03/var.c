#include <stdio.h>

void main() {
    int money = 1000;
    double pi = 3.14;
    printf("money : %d, pi : %.2f\n", money, pi);
    // money : 1000, pi : 3.14

    char ch1 = 'A';
    char ch2 = 65;
    printf("문자 %c의 아스키 코드 값 : %d\n", ch1, ch1); 
    // 문자 A의 아스키 코드 값 : 65
    printf("아스키 코드 값이 %d인 문자 : %c\n", ch2, ch2);
    // 아스키 코드 값이 65인 문자 : A

    char fruit[20] = "strawberry";
    printf("딸기 : %s\n", fruit);
    // 딸기 : strawberry
    printf("딸기잼 : %s %s\n", fruit, "jam");
    // 딸기잼 : strawberry jam

    return;
}