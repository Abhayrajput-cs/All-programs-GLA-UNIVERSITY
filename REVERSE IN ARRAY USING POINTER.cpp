#include<stdio.h>
int main()
{
	int a,b[100];
	int *p[100];
	printf("Enetr the size of the array \n");
	scanf("%d",&a);
	printf("Enter the numbers ");
	for(int i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
		p[i]=&b[i];
	}
	for(int j=a;j>=0;j--)
	{
		printf("%d\n",*p[j]);
	}
	return 0;
}