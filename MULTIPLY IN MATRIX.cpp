#include<stdio.h>
int main()
{
	int a[100][100],c[100][100],d[100][100]={0},b;
	printf("Enter the size of the array");
	scanf("%d",&b);
	printf("Enter the elements of first array");
     for(int i=0;i<b;i++)
	{
		for(int j=0;j<b;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of the second array");
	for(int i=0;i<b;i++)
	{
		for(int j=0;j<b;j++)
		{
			scanf("%d",&c[i][j]);
		}
	}
	for(int i=0;i<b;i++)
	{
		for(int j=0;j<b;j++)
		{
        d[i][j]=(a[i][j]*c[j][i]);			
		}
	}
	for(int i=0;i<b;i++)
	{
		for(int j=0;j<b;j++)
		{
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	return 0;
}