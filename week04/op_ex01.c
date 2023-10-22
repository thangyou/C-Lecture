#include <stdio.h>

int main(void) { 
   int data1 = 5, data2 = 3;

   int res1 = data1 + data2;
   int res2 = data1 - data2;
   int res3 = data1 * data2;
   int res4 = data1 / data2;
   int res5 = data1 % data2;

   printf("%d, %d, %d, %d, %d\n", res1, res2, res3, res4, res5);
   // 8, 2, 15, 1, 2

    return 0;
}