#include<stdio.h>

int main(){
    int year;
    printf("Enter the year: ");
    scanf("%i", &year);
    if (year%400 == 0){
        printf("Its a Leap Year");
    }
    elif (year%100 == 0){
        printf("Its not a leap year");
    }
    else{
        printf("Its not a Leap year");
    }
    return 0;
}
