#include <stdio.h>

/**
 * 메모리 주소 지정 방식
 * 변수 == 컴파일 ==> 메모리 주소
 * 1. 직접 주소 지정 방식 : c언어의 변수
 * 2. 간접 주소 지정 방식 : c언어의 포인터
 * 
 * 포인터
 * - 메모리의 '주소'를 저장하고 있는 메모리 공간
 * - 자료형* 포인터 변수명;
 * 
 * 프로그램은 실행할 때마다 사용할 메모리 공간 주소가 변함.
 * 주소 연산자(&)
 * - 할당된 메모리의 시작 주소값을 구함
 * - 변수 앞에 & 연산자를 붙여 사용
*/

void main() {
    short birthday;
    short* ptr;
    ptr = &birthday; // 포인터 ptr에 birthday 주소 대입

    /* %p 형식은 메모리의 주소를 16진수 형식으로 출력 */
    printf("birthday 변수 주소 %p", ptr);
}