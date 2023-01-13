#include<stdio.h>
int factorial(int n)
{
	int fact=1;
	for(int i=n;i>=1;i--)
	{
		fact=fact*i;
	}
	printf("The factorial of the  number is %d ",fact);
}
int main()
{
	int a;
	printf("Enter the number");
	scanf("%d",&a);
	factorial(a);
	return 0;
}