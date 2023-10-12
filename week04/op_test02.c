#include <stdio.h>

/*
    2개의 정수를 입력받고 증감연산자를 사용하여
    연산한 결과를 출력하기
    정수형 변수 a, b, result를 사용하고
    세 변수의 초기값은 0으로 지정함
*/
int main(void) {
    int a = 0, b = 0, result = 0;

    printf("두 정수를 입력해주세요 : ");
    scanf("%d %d", &a, &b);
    printf("입력한 두 수는 %d와 %d입니다.\n", a,b); // 2 4

    printf("%d는 전위형으로, %d는 후위형으로 지정한 후\n",a,b);
    a = (++a) * 2; // 3 * 2 = 6
    b = (b--) * 3; // 4 * 3 = 12
    result = a + b;
    printf("두 수를 더한 결과는 %d입니다.", result);

    return 0;
}