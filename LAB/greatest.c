#include<stdio.h> 
void main() 
{ 
int a,b,c; 
printf("Enter three no.\n"); 
scanf("%d%d%d",&a,&b,&c); 
int re=(a>b)?((a>c)?a:c):((b>c)?b:c); 
printf("greatest number=%d",re); 
}