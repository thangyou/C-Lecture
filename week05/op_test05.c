#include <stdio.h>

/*
    입력한 숫자가 5보다 크면 입력한 값을 오른쪽으로 2 이동.
    작으면 왼쪽으로 2 이동.
*/
int main(void) {
    int input, res;
    int b = 5;

    printf("10보다 작은 수를 입력하세요 : ");
    scanf("%d", &input); 
    // input = 4 
    // 0000 0000 0000 0100
    res = (input > b) ? input >> 2 : input << 2; 
    // input << 2
    // 0000 0000 0001 0000
    // 16 8 4 2 1

    printf("입력한 수는 %d이고, 이동 결과는 %d입니다.", input, res);
    // 입력한 수는 4이고, 이동 결과는 16입니다.

    return 0;
}