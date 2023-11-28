#include <stdio.h>

/**
 * 간접참조 연산자(*)
 * - 포인터에 사용하며, 포인터가 가리키는 변수를 사용
 * - 포인터 변수가 가리키는 곳의 내용
 * - 변수 앞에 * 연산자를 붙여 사용
 * ex)  int a;      
 *      int *pa;    ->      *pa == a
 *      pa = &a;    
 * 
 *      변수 a 사용         포인터 pa 사용
 *      a = 10;             *pa = 10;        
 *      b = a;              b = *pa;
 *      a + 20;             *pa + 20;
 *      printf("%d", a);    printf("%d", *pa);
 *      scanf("%d", &a);    scanf("$d", &*pa);
 *                          scanf("%d", pa);
*/

int main() {
    int a = 10;
    int* pa;    // 포인터 선언

    pa = &a;    // 포인터에 a의 주소 대입
    printf("포인터로 a 값 출력 : %d\n", *pa);

    (*pa)++;
    printf("변수명으로 a 값 출력 : %d\n", a);

    return 0;
}

/*
    포인터로 a 값 출력 : 10 
    변수명으로 a 값 출력 : 11
*/