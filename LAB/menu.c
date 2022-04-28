#include<stdio.h>

int main(){
    char sign;
    int a, b;
    printf("Enter the sign of the function\n");
    scanf("%c", &sign);
    switch (sign)
    {
    case '+':
        printf("Enter two numbers ");
        scanf("%i %i", &a, &b);
        printf("Sum is %i", a+b);
        break;

    case '-':
        printf("Enter two numbers ");
        scanf("%i %i", &a, &b);
        printf("Subtraction is %i", a-b);
        break;
    case '*':
        printf("Enter two numbers ");
        scanf("%i %i", &a, &b);
        printf("Multiplication is %i", a*b);
        break;
    case '/':
        printf("Enter two numbers ");
        scanf("%i %i", &a, &b);
        printf("Division is %0.2f", (float) a/b);
        break;
    default:
        printf("invalid symbol");
    }
    return 0;
}