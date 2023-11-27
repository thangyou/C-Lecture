#include <stdio.h>
#include <stdlib.h> // rand() 함수 포함 라이브러리
#include <time.h>   // time()함수 포함 라이브러리

/**
 * 배열
 * 배열 초기화는 중괄호를 사용
 * 주로 반복문으로 처리
 * 배열은 사용 전 미리 선언
 *  - 메모리 저장 공간 확보
 *  - 자료형 배열명[요소 개수]; int array01[5];
*/

void main() {
    int ary[5];

    srand(time(NULL)); // 매번 다른 시드값 생성
    for (int i=0; i < sizeof(ary)/sizeof(ary[0]) - 1; i++) {
        ary[i] = rand()%9 + 1; // 1 ~ 9까지 난수
    }
    ary[3] = ary[0] + ary[1];
    printf("마지막 배열 값 : ");
    scanf("%d", &ary[4]);

    printf("배열 출력\n");
    for (int j = 0; j < 5; j++)
    {
        printf("ary[%d] : %d\n", j, ary[j]);
    }
    
}