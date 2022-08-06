#include<stdio.h>
int fact(int num);


int main(){
    
    int n, r;
    float ncr;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);
    ncr = fact(n) / (fact(r) * fact(n - r));
    printf("Value of %dC%d is: %0.2f", n, r, ncr);
}

int fact(int num){
    int k = 1 , i;
    if (num==0){
        return (k);
    }
    else{
        for (i=1; i<=num; ++i){
            k = k*i;
        }
        return (k);
    }
    
}