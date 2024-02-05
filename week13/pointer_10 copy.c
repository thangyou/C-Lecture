/**
 * 포인터와 배열
 * - 포인터의 뺄셈과 관계 연산
 * 1. 포인터 뺄셈
 * 포인터 - 포인터 -> 값의 차 / 가리키는 자료형의 크기
 * 2. 관계 연산자
 * 대소 관계 확인 가능
*/

int main(void) {
    int ary[3] = { 10, 20, 30, 40, 50};
    int* pa = ary;
    int* pb = pa + 3;

    printf("pa : %u\n", pa);
    printf("pb : %u\n", pb);
    pa++;
    printf("pb - pa = %u\n", pb - pa);

    printf("앞에 있는 배열 요소의 값 출력 : ");
    if(pa < pb) printf("%d\n", *pa);
    else printf("%d\n", *pb);

    return 0;
}