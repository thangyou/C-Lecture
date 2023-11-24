#include <stdio.h>

/**
 * 숫자를 입력 받아 해당 단부터 9단까지 출력
 * - while문 무한 반복, break 사용
 * - 0 또는 1 입력 시 종료
 * - 숫자는 2 ~ 9까지만 입력 받을 수 있음
 * - 다중 if문과 for 반복문 사용
*/

int main() {
    int step, i, j;

    while(1)
    {
        printf("시작단을 입력하세요. (0 => 종료) : ");
        scanf("%d", &step);

        if (step == 0 || step == 1) {
            printf("종료합니다.\n");
            break;
        }

        else if (!(step >= 2 && step <= 9)) {
            printf("시작단은 2 ~ 9 사이의 숫자로 입력하세요. \n");
        }

        else {
            for (i = step; i <= 9 ; i++)
            {
                printf("< %d단 > \n", i);
                for (j = 1; j <= 9; j++) 
                {
                    printf("%d * %d = %d\n", i, j, i*j);
                }
            };
         }
        
    }

}