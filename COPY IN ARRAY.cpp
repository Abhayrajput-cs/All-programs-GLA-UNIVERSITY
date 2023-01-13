#include<stdio.h>
int main()
{
	int a[100];
	int x[100];
	int b,c,sum=0;
	printf("Enter the size of the array");
	scanf("%d",&b);
	for(int i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<b;i++)
	{
		x[i]=a[i];
	}
	for(int j=0;j<b;j++)
	{
		printf("%d",x[j]);
	}
	return 0;
}