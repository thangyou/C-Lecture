#include <stdio.h>

void main() {
    int a;
    printf("값을 입력하세요 : ");
    scanf("%d", &a);
    printf("입력된 값 : %d\n", a);

    printf("=====================\n");

    int age;
    double height;

    printf("나이와 키를 입력하세요 : ");
    scanf("%d %lf", &age, &height);
    printf("나이는 %d살, 키는 %.1lfcm입니다.\n", age, height);

    printf("=====================\n");

    char grade;
    char name[20];

    printf("학점을 입력하세요 : ");
    scanf("%c", &grade);
    printf("이름을 입력하세요 : ");
    scanf("%s", name);
    printf("%s의 학점은 %c입니다.\n", name, grade);


}