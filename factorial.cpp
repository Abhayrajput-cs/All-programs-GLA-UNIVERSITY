#include<stdio.h>
int main()
{
	int a,fact=1;
	printf("Enter the number");
	scanf("%d",&a);
	for(int i=a;i>=1;i--)
	{
		fact=fact*i;
	}
	printf("the factorial is %d",fact);
	return 0;
}