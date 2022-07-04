#include<stdio.h>

int main(){
    int year;
    printf("Enter the year: ");
    scanf("%i", &year);
    if (year%400 == 0 || (year%4==0 && year%100!=0)){
        printf("Its a Leap Year");
    }
    else{
        printf("Its not a Leap year");
    }
    return 0;
}
