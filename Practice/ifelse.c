#include <stdio.h>

int main(){
    int num = 10;
    if (num > 12){
        printf("Number is greater than 12\n");
        }
    else{
        printf("Number is less than 12\n");
    }
//Another way to write this is 
    (num < 12) ? printf("number is less than 12\n") : printf("number is greater than 12\n");
num = 12;
      if (num > 12){
        printf("Number is greater than 12\n");
        }
      else if(num == 12){
          printf("Number is equal to 12");
      }
      else{
        printf("Number is less than 12\n");
    }
    return 0;
}