#include <stdio.h>

/**
 * 문자형(char) 저장 배열
 * 문자열로 직접 초기화 가능
 * 문자열 저장 시 strcpy 함수 사용
 * 터미널로 입출력 ? - scanf, gets, printf, puts
 * 
 * 문자형 배열 선언과 초기화
 * 저장할 문자열의 길이보다 최소한 하나 이상 크게 선언
 *  - 여분의 공간에 널문자 저장
 *  - 널문자는 문자열의 끝을 표시
*/
void main() {
    char str[80] = "applejam";

    printf("최초 문자열 : %s\n", str);
    printf("문자열 입력 : ");
    scanf("%s", str);
    printf("입력 후 문자열 : %s\n", str);

    /*
    최초 문자열 : applejam
    문자열 입력 : grape
    입력 후 문자열 : grape
    */
}