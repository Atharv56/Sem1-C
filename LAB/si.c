#include<stdio.h>

int main(){
    int p, r, t;
    float si;

    printf("Enter the principal amount: ");
    scanf("%i", &p);
    printf("\nEnter the rate of interest per annum: ");
    scanf("%i", &r);
    printf("\nEnter the number of years: ");
    scanf("%i", &t);
    si = (p*r*t)/100;
    printf("\nThe Simple Interest on the principal amount %i is: %0.2f", p, si);
    //system("PAUSE");
    scanf("");
    return 0;
}