#include <stdio.h>

/**
 * 문자열 전용 입출력 함수
 * - gets : 빈 칸 포함하여 한 줄 전체를 문자열로 입력
 * - puts : 문자열 출력 함수, 자동 줄 바꿈
*/

void main() {
    char str[80];
    printf("문자열 입력 : ");
    gets(str);
    puts("입력된 문자열");
    puts(str);

    /*
    문자열 입력 : c lecture
    입력된 문자열
    c lecture
    */
}