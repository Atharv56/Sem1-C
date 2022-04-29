#include <stdio.h>

int main(){
    int num[3], i, large;
    printf("Enter the three integers: ");
    scanf("%i", &num[0]);
    scanf("%i", &num[1]);
    scanf("%i", &num[2]);

    printf("The three numbers are: %i, %i, %i", num[0], num[1], num[2]);
    for (i = 0; i<3; ++i){
        if (num[i-1] > num[i]){
            large = num[i-1];
        }
        else{
            large = num[i];
        }
    }
    printf("\nLargest number is: %i", large);
    return 0;
}