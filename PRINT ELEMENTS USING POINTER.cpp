#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[100];
	int *p[100];
	for(int i=0;i<n;i++)
	{
    	scanf("%d",&a[i]);
		p[i]=&a[i];
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",*p[i]);
	}
	return 0;
}