#include <stdio.h>

void main() {
    char name[20];
    int age;
    double height;
    char blood_type[3];

    printf("Profile\n");
    printf("이름 : ");
    scanf("%s", name);
    printf("나이 : ");
    scanf("%d", &age);
    printf("키 : ");
    scanf("%lf", &height);
    printf("혈액형 : ");
    scanf("%s", blood_type);
    printf("%s (%d세) - %.1lfcm, %s형\n", name, age, height, blood_type);
    
    printf("After 10 years..\n");
    age += 10;
    height -= 0.5;
    printf("이름 : %s\n", name);
    printf("나이 : %d살\n", age);
    printf("키 : %.1lfcm\n", height);
    printf("혈액형 : %s형\n", blood_type);

}