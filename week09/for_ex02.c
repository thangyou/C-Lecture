#include <stdio.h>

/* 중첩 반복문을 사용하여 출력 */
int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j < i+1; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    /*
    1
    12  
    123
    1234
    12345
    */
}