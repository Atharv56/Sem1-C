#include<stdio.h>

void text(){
    printf("This is a function\n");
}

void intro(char name[30], int age){
    printf("Hello My name is %s \nMy age is %i\n", name, age);
}

int sum(int x, int y){
    return x+y;
}
int main(){
    text();
    text();
    intro("Atharv", 18);
    intro("Shreya", 23);
    int result = sum(12,3);
    printf("%d", result);
    return 0;
}