#include <stdio.h>

void main() {
    int num;

    printf("숫자를 입력해주세요 : ");
    scanf("%d", &num);

    if (num > 0) printf("입력한 숫자는 %d로 0이상의 양의 정수입니다.\n", num);
    printf("종료\n");
}