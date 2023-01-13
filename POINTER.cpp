#include<stdio.h>
int arr(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
int main()
{
	int a[100],n;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the elements of array");
	arr(a,n);
	return 0;
}