#include <stdio.h>

int main(void) {
    // 제어 문자 출력
    printf("Hi~~~~\n");
    printf("My\t friend \n");
    printf("I lika\be C!\n");
    printf("Cow\rW\a\n");

    /*
    Hi~~~~
    My	 friend 
    I like C!
    Wow
    */

    printf("=====================\n");

    // 문자, 정수, 실수 출력
    printf("%d \n", 10);        // 정수
    printf("%lf \n", 3.14);     // 소수점 이하 6자리까지 실수 출력
    printf("%.2lf \n", 3.1453); // 소수점 이하 2자리까지 실수 출력
    printf("%c \n", 'a');       // 문자 출력
    printf("%s \n", "hi");      // 문자열 출력
    
    /*
    10 
    3.140000 
    3.15 
    a 
    hi 
    */

    return 0;   
}