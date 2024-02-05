#include <stdio.h>

void func(int(*fp)(int, int)); // 함수 포인터를 매개 변수로 갖는 함수
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);

int main(void){
    int set;        // 선택된 메뉴 번호를 저장할 변수

    printf("1. 두 정수의 합\n");
    printf("2. 두 정수의 곱\n");
    printf("3. 두 정수 중 큰 값 계산\n");
    printf("원하는 작업을 선택하세요 : ");
    scanf("%d", &set);

    switch (set)
    {
    case 1:
        func(sum);
        break;
    case 2:
        func(mul);
        break;
    case 3:
        func(max);
        break;
    
    }

    return 0;
}

void func(int(*fp)(int, int)) {
    int a, b;
    int res;

    printf("두 정수값을 입력 : ");
    scanf("%d %d", &a, &b);
    res = fp(a,b);  // 함수 포인터로 가리키는 함수 호출
    printf("결과 : %d\n", res);
}

int sum(int a, int b) {
    return (a + b);
}

int mul(int a, int b) {
    return (a * b);
}

int max(int a, int b) {
    if (a > b) return a;
    else return b;
}