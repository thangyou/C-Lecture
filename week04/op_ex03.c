#include <stdio.h>

int main() {
    int a = 5, b = 5;
    int pre, post;

    printf("초기값 : a = %d, b = %d\n", a, b);

    pre = (++a) * 3;  // 6 * 3
    // ++a => a + 1 = 6
    post = (b++) * 3; // 5 * 3

    printf("전위형 : (++a) * 3 = %d\n", pre);
    printf("후위형 : (b++) * 3 = %d\n", post);

    /*
    초기값 : a = 5, b = 5
    전위형 : (++a) * 3 = 18
    후위형 : (b++) * 3 = 15 
    */

    return 0;
}