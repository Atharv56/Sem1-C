#include <stdio.h>

int main(){

    int n = 7, i;
    float factorial = 1, result = 0;

    for(i = 1; i<=n; i++){
        factorial = factorial*i;
        result = result + (i/factorial);

}
    printf("Sum: %f", result);

    return 0;
}