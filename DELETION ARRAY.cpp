#include<stdio.h>
int main()
{
	int a[100],b,c;
	printf("Enter the number of elements");
	scanf("%d",&b);
	for(int i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the position of the elemet to delete");
	scanf("%d",&c);
	for(int i=0;i<b;i++)
	{
		if(i>=c)
		a[i]=a[i+1];
	}
	for(int i=0;i<b;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}