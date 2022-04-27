#include<stdio.h>
int main(){
    char name[30];
    int age;
    printf("Enter your name: \n");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("hello my name is %s \nMy age is %d\n", name, age);
    system("PAUSE");
    return 0;
}