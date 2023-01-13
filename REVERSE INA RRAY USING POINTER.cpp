#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int *a[n];
	int *b[n];
	int *p[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(int k=0;k<n;k++)
	{
	*p=a[k];
	a[k]=b[k];
	b[k]=*p;
}
printf("The a array is \n");
for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\nThe b array is \n");
	for(int i=0;i<n;i++)
	{
		printf("%d",b[i]);
	}	
return 0;
}