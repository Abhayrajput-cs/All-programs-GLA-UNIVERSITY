#include<stdio.h>
int main()
{
	int a[100];
	int b,c,temp;
	printf("Enter the size of the array");
	scanf("%d",&b);
	for(int i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=0;j<b;j++)
	{
	for(int i=0;i<b;i++)
{
	if(a[i]>a[i+1])
     	{
		temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
	}
}
}
for(int i=0;i<b;i++)
	{
		if(i==0)
		printf("The minimum number is %d",a[i]);
		if(i==(b-1))
		printf("The maximum  number is %d",a[i]);
	}
	
	return 0;
}