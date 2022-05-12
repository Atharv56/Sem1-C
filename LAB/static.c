#include <stdio.h>

int fun(){
    static int a = 10;
    int b = 1;
    printf("\n%d", a);
    printf("\n%d", b);
    ++a;
    ++b;

}

int main(){
    fun();
    fun();
    fun();
    return 0;
}

