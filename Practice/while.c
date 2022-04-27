#include <stdio.h>
int main(){
    int i = 0;
    while(i<=10){
        printf("%d\n", i);
        ++i;
    }
    i = 10;
    printf("Descending order\n");
    do{
        printf("%d\n", i);
        --i;

    }
    while (i>=0);
    return 0;
}