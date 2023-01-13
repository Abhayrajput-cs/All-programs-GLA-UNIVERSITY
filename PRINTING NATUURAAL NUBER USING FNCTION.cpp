#include<stdio.h>
int main()
{
		int *p[100][100];
		int *q[100][100];
	int a,b[100][100];
	int c[100][100];
	int d[100][100];
	printf("Enter the size ");
	scanf("%d",&a);
	printf("Enter the numbers ");
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<a;j++)
		{
		scanf("%d",&b[i][j]);
        p[i][j]=&b[i][j];
    }
}
for(int i=0;i<a;i++)
	{
		for(int j=0;j<a;j++)
		{
		scanf("%d",&c[i][j]);
        q[i][j]=&c[i][j];
    }
}

for(int i=0;i<a;i++)
	{
		for(int j=0;j<a;j++)
		{
           int sum =0;
			for(int k=0;k<a;k++)
			{
				sum=sum+(*p[i][k]*(*q[k][j]));
			}
			d[i][j]=sum;
		}
	}
		for(int i=0;i<a;i++)
	{
		for(int j=0;j<a;j++)
		{
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	return 0;
}
