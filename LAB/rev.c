#include<stdio.h>

int main(){
    int num, sum=0,rev=0, d;
    printf("Enter the number: \n");
    scanf("%d", &num);
    while(num){
        d = num%10;
        num = num/10;
        sum = sum+d;
        rev = rev*10+d;

    }
    printf("Sum of digits: %d", sum);
    printf("\nReverse of the number is: %d", rev);
    return 0;
    
}