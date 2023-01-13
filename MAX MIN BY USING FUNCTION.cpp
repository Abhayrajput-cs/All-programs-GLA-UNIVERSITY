#include<stdio.h>
int arr(int n,int a[])
{
	int t;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<n;i++)
		{
		if(a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
	}
	printf("The maximum is %d\n",a[n-1]);
	printf("The minimum is %d",a[n]);
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