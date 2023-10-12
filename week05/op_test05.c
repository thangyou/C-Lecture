#include <stdio.h>

/*
    입력한 숫자가 5보다 크면 입력한 값을 오른쪽으로 2 이동.
    작으면 왼쪽으로 2 이동.
*/
int main(void) {
    int input, res;

    printf("10보다 작은 수를 입력하세요 : ");
    scanf("%d", &input);
    res = (input > 5) ? input >> 2 : input << 2;
    printf("입력한 수는 %d이고, 이동 결과는 %d입니다.", input, res);

    return 0;
}