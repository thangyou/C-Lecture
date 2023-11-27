#include <stdio.h>

/**
 * 4행 5열의 2차원 배열에 5부터 100까지 5씩 증가하는 값을 
 * 한 줄씩 저장하는 프로그램
*/

void main() {
    int arr[4][5];
    int i, j, cnt = 1;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++) {
            arr[i][j] =  5 * (cnt++);
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++) {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }

    /*
         5   10   15   20   25
        30   35   40   45   50
        55   60   65   70   75
        80   85   90   95  100
    */

}