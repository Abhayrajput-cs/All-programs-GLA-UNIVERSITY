#include<stdio.h>
int arr(int n,int a[100])
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
}
int main()
{
	int n,a[100];
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the numbers");
	arr(n,a);
}