#include<stdio.h>
int main()
{
	int a[100];
	int b,num,pos;
	printf("Enter the elements of the array");
	scanf("%d",&b);
	printf("Enter the number and position ");
	scanf("%d%d",&num,&pos);
	printf("Enter the numbers");
	for(int i=0;i<b+1;i++)
	{
		scanf("%d ",&a[i]);
}
		for(int j=b+1;j>=pos-1;j--)
		{
		a[j+1]=a[j];			
		}
	a[pos-1]=num;
	for(int j=0;j<b+1;j++)
	{
		printf("%d ",a[j]);
	}
	return 0;
}
