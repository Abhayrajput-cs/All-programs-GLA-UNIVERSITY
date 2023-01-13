#include<stdio.h>
int arr(int n,int a[])
{
	int sum =0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=0;j<n;j++)
	{
		sum=sum+a[j];
	}
	printf("%d",sum);
}
int main()
{
	int a[100],n;
	printf("Enter the size");
	scanf("%d",&n);
	printf("Enter the numbers");
	arr(n,a);
	return 0;
	
}