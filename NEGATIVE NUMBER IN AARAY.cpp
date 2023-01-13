#include<stdio.h>
int main()
{
	int a[100];
	int b,c=0;
	printf("Enter the size of the array");
	scanf("%d",&b);
	for(int i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<b;i++)
	{
		if(a[i]<0)
		c++;
	}
	printf("The total number of negative numbers are %d",c);
	return 0;
	}
	