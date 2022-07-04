#include<stdio.h> 
int main()
{
    char ch='A'; //ASCII character
    int i,j,k,m;
    for(i=1;i<=5;i++)//rows
    {
       for(j=5;j>=i;j--)//spaces
       printf(" ");
       for(k=1;k<=i;k++)
       printf("%c",ch++);
       ch--;
       for(m=1;m<i;m++)
       printf("%c",--ch);
       printf("\n");
       ch='A';
    }
}