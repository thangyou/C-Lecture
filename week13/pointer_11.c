/**
 * 함수 포인터
 * 함수명 : 함수가 있는 메모리의 주소
 * 함수포인터 : 특정 함수를 구성하는 시작 명령의 위치를 가리키는 포인터
 * 포인터에 저장하면 함수를 다양한 방식으로 호출 가능
 * 함수 원형을 사용하여 포인터 선언
*/

int sum(int a, int b);

int main(void) {
    int(*fp)(int, int);     // 함수 포인터 선언
    int res;                // 반환값 저장할 변수

    fp = sum;               // 함수명을 함수 포인터에 저장
    res = fp(10, 20);       // 함수 포인터로 함수 호출
    printf("result = %d\n", res);

    return 0;
}

int sum(int a, int b) {
    return (a + b);
}