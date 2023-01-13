#include<stdio.h>
int main()
{
	int a[100],b;
	printf("Enter the size of the rray");
	scanf("%d",&b);
	int c[b+1],d[b+1];
	for(int i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=0;j<b;j++)
	{
		if(a[j]%2==0)
		{
		c[j]=a[j];
		printf("%d is even ",c[j]);
		}
		else
		{
		d[j]=a[j];
		printf("%d is odd ",d[j]);
	}
}
for(int i=0;i<b;i++)
{
	printf("%d ",c[i]);
}
for(int i=0;i<b;i++)
{
	printf("%d ",d[i]);
}
	return 0;
}