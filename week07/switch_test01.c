#include <stdio.h>

/*
    정수 2개와 사칙연산자를 입력하세요.
    정수 1, 연산자, 정수 2 : 12 *24
    12 * 24 = 288
*/
void main() {
    int num1, num2, result = 0;
    char op;

    printf("계산식 입력 : "); // 12*24
    scanf("%d %c %d",&num1, &op, &num2);

    switch (op)
    {
    case '+':
        result = num1+num2;
        break;
    case '-':
        result = num1-num2;
        break;
    case '*':
        result = num1*num2;
        break;    
    case '/':
        result = num1/num2;
        break;
    default:
        printf("잘못된 입력임당!");
    }
    if (op=='+' || op=='-' || op=='*' || op=='/') 
        printf("%d %c %d = %d", num1, op, num2, result); 
        // 12 * 24 = 288
    
    printf("");
}