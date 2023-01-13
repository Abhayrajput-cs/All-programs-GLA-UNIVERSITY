#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],c[100][100]={0},sum;
	printf("Enter the elements of first matrix");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		printf("Enter the elements of second matrix");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<3;i++)
	{ 
		for(int j=0;j<3;j++)
		{  
		sum =0;
			for(int k=0;k<3;k++)
			{
				sum=sum+(a[i][k]*b[k][j]);
			}
			c[i][j]=sum;
		}
	}
	printf("THE MATRIX IS \n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
return 0;
}