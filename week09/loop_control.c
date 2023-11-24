#include <stdio.h>

/**
 * 1. break 
 * 반복문 안에서 반복을 즉시 끝냄
 * 자신을 포함한 하나의 반복문에만 영향을 줌
 * 
 * 2. continue
 * 1회성 취소
 * continue 이후의 명령들 실행하지 않고, 증감식으로 이동 후
 * 조건식을 체크하면서 진행
 * 
*/

void main() {
    int m, n;
    for (m = 5; m < 7; m++) {
      for (n = 0; n < 3; n++) {
        if (m == 5 && n == 1) break;
        printf("m(%d) - n(%d)\n", m, n);
      }
      if (m == 5 && n == 1) break;
    }
    // m(5) - n(0)

    int k;
    for (k = 5; k < 8; k++) {
        if (k == 6) continue;
        printf("k(%d)\n", k);
    }
    /*
        k(5)
        k(7)    
    */
    
}