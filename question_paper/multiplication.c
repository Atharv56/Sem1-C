#include<stdio.h>
void mul(int a[10][10] ,int b[10][10], int p, int m, int n)
{
    // int j,i,c[i][j],k;
    int c[10][10];
    for(int i=0;i<=m-1;i++)
	{
		for(int j=0;j<=p-1;j++)
		{
			c[i][j]=0;
			for(int k=0;k<=n-1;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
printf("\nProduct Matrix is:\n");
	for(int i=0;i<=m-1;i++)
	{
		for(int j=0;j<=p-1;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
    
}

int main()
{
	int a[10][10],b[10][10],c[10][10],m,n,p,i,j;
// 	clrscr();
	printf("Matrix A\n");
	printf("Enter the number of rows and columns:");
	scanf("%d%d",&m,&n);
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			printf("Enter a value:");
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix B\n");
	printf("Enter the number of columns:");
	scanf("%d",&p);
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=p-1;j++)
		{
			printf("Enter a value:");
			scanf("%d",&b[i][j]);
		}
	}

mul(a,b,p,m,n);
// 	for(i=0;i<=m-1;i++)
// 	{
// 		for(j=0;j<=p-1;j++)
// 		{
// 			c[i][j]=0;
// 			for(k=0;k<=n-1;k++)
// 			{
// 				c[i][j]=c[i][j]+a[i][k]*b[k][j];
// 			}
// 		}
// 	}

	return 0;
}