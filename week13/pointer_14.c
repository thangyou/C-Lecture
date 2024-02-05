#include <stdio.h>

/**
 * void 포인터
 * 주소를 가리키는 자료형이 일치하는 포인터에만 대입 가능
 * 가리키는 자료형이 다른 주소를 저장하는데 사용
*/

int main(void) {
    int a = 10;
    double b = 3.5;
    void* vp;

    vp = &a;
    printf("a : %d\n", *(int *)vp);
    
    vp = &b;
    printf("b : %.1lf\n", *(double *)vp);
    

    return 0;
}