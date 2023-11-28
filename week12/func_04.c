#include <stdio.h>

void fruit(int n);

int main() {
    fruit(1);

    return 0;
}

/**
 * 재귀 함수
 * 반복문과 차이점?
 *  - 최초 호출한 곳이 아닌 이 전에 호출했던 곳으로 돌아감
*/
void fruit(int n) {     // 호출 횟수 = n
   printf("apple\n");   
   if (n == 3) return;  // 반환하고 끝
   fruit(n + 1);        // 재호출 시 호출 횟수 1 증가
   printf("jam\n");
}