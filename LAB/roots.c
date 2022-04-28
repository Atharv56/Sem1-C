#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    float root1, root2;

    printf("Compare the equation with 'ax^2 + bx + c' and enter the values of a,b,c: ");
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    root1 = (-b+sqrt(b*b-4*a*c))/2*a;
    root2 = (-b-sqrt(b*b-4*a*c))/2*a;

    printf("Roots of the equation are: %0.2f and %0.2f", root1, root2);

    return 0;
    
}