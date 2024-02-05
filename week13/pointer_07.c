#include <stdio.h>

/**
 * 포인터와 배열
 * - 배열명으로 배열 요소 사용하기
 * : 주소 + 정수 -> 주소 + (정수 * 주소를 구한 변수의 크기)
 * 
 * e.g) 크기 4Byte인 int형 변수 주소 100번지에 1을 더하면?
 *          100 101 102 103
 * 변수 a    ㅁ  ㅁ  ㅁ  ㅁ
 * &a       a의 주소값 100
 *          a의 포인터
 *          a를 가리킴
 *          int형을 가리킴(a가 int형)
 * &a + 1   100 + (1 * sizeof(int)) -> 104
 *          int형을 가리키는 주소 104번지
 *          104번지 ~ 107번지까지 4Byte 저장 공간의 주소값
*/

int main(void) {
    int ary[3];
    int i;

    *(ary + 0) = 10;                // ary[0] = 10
    *(ary + 1) = *(ary + 0) + 10;   // ary[1] = ary[0] + 10

    printf("세 번째 배열 요소에 키보드 입력 : ");
    scanf("%d", ary + 2);           // &ary[2]

    for (i = 0;i < 3;i++)
    {
        printf("%5d", *(ary + i));
    }
    
   
    return 0;
}