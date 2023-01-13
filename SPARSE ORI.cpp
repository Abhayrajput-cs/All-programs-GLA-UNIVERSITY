#include<stdio.h>
int main()
{
	int a[100],b,C=1,X=1;
	scanf("%d",&b);
	for(int i=0;i<b;i++)
	{
		for(int j=0;j<b;j++)
		{
		scanf("%d",&a[i][j]);
	}
}
	for(int i=0;i<b;i++)
	{
		for(int j=0;j<b;j++)
		{
			if(a[i][j]==0)
			c++;
			else
			x++;
		}	
	}
	if(c>x)
	printf("The matrix is SPARSE");
	else
	printf("The matrix iz not SPARSE");
	return 0;
}