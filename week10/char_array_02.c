#include <stdio.h>
#include <string.h> 
// 해결 - implicit declaration of function 'strcpy' [-Wimplicit-function-declaration]

/**
 * strcpy 함수
 * char형 배열에 새로운 문자열을 저장
 * 저장할 문자열의 길이를 파악하여 딱 그 길이만큼만 복사
*/
void main() {
    char str1[80] = "cat";
    char str2[80];
    printf("변경 전 str1 : %s\n", str1);

    strcpy(str1, "tiger");
    strcpy(str2, str1);
    printf("변경 후 str1 : %s, str2 : %s\n", str1, str2);

    /*
    변경 전 str1 : cat
    변경 후 str1 : tiger, str2 : tiger
    */
}