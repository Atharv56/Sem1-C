#include <stdio.h>
#include <math.h>

int main(){
    int num, ognum, remainder, n=0;
    float result = 0.0;
    printf("Enter an integer: \n");
    scanf("%d", &num);
    ognum = num;
    for(ognum = num; ognum !=0; ++n){ // store the number of digits of num in n
        ognum = ognum/10;
    }
    for (ognum=num; ognum!=0; ognum = ognum/10){
        remainder = ognum%10;//Contains the last digit

        result = result + pow(remainder,n); //Stores the power of individual digits in result
    }
    if ((int)result == num){
        printf("\n%d is an Armstrong number.", num);
    }
    else{
        printf("\n%d is not an Armstrong number.", num);
    }
    return 0;

}