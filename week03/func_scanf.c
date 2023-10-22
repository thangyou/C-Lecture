#include <stdio.h>

void main() {
    int a;
    printf("값을 입력하세요 : ");
    scanf("%d", &a);
    // 값을 입력하세요 : 10
    printf("입력된 값 : %d\n", a);
    // 입력된 값 : 10   

    printf("=====================\n");

    int age;
    double height;

    printf("나이와 키를 입력하세요 : ");
    scanf("%d %lf", &age, &height);
    // 나이와 키를 입력하세요 : 20 179.6
    printf("나이는 %d살, 키는 %.1lfcm입니다.\n", age, height);
    // 나이는 20살, 키는 179.6cm입니다.

    printf("=====================\n");

    char grade;
    char name[20];

    printf("학점을 입력하세요 : ");
    scanf("%c", &grade);
    printf("이름을 입력하세요 : ");
    scanf("%s", name);
    printf("%s의 학점은 %c입니다.\n", name, grade);
    // 홍길동의 학점은 A입니다.

}