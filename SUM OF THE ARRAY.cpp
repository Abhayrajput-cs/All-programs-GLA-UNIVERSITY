#include<stdio.h>
int main()
{
	int a[100];
	int b,c,sum=0;
	printf("Enter the size of the array");
	scanf("%d",&b);
	for(int i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<b;i++)
{
	sum=sum+a[i];
}
printf("%d",sum);
return 0;
}