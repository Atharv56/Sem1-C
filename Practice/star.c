#include <stdio.h>

int main(){

    int i,j;
    for(i=0;i<=5;i++)
{
    for(j=1;j<=5-i;j++){
        printf("*");
        
    } 
    printf("\n");
    

}


for(i=2;i<=5;i++)
{
    for(j=2;j<=i+1;j++){
        printf("*");
        
    } 
    printf("\n");

    
}
return 0;
}