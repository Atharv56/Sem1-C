#include<stdio.h>

int main(){
    char sign;
    int a, b;
    printf("Enter the sign of the function\n");
    scanf("%c", &sign);
    printf("Enter two numbers: ");
    scanf("%i %i", &a, &b);
    switch (sign)
    {
    case '+':
        printf("Sum is %i", a+b);
        break;
    case '-':
        printf("Subtraction is %i", a-b);
        break;
    case '*':
        printf("Multiplication is %i", a*b);
        break;
    case '/':   
        printf("Division is %0.2f", (float) a/b);
        break;
    default:
        printf("invalid symbol");
    }
    return 0;
}