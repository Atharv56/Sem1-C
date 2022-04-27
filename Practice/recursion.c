#include<stdio.h>

int sum(int k); //function is declared

int main(){
    
   
   /* printf("enter the number: ");
    scanf("%d", a); */
    int result = sum(10);
    printf("%d\n", result);
    system("PAUSE");
    return 0;
}

int sum(int k){
    if (k>0){
        return k + sum(k-1);

    }
    else{
        return 0;
    }
}