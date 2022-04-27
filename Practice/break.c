#include<stdio.h>

int main()
{
    int i;
    for(i = 0;i<=10; i++){
        printf("%d\n", i);
        if(i == 4 ){
            break;
        }
    }
    printf("If we use continue");
    for(i = 0;i<=10; i++){
      
        if(i == 4 ){
            continue;
        }
          printf("%d\n", i);
    }
    return 0;
}