#include<stdio.h>
int sum_digit(int n)
{
	int sum=0,c;
	for(int i=n;i>=1;i=i/10)
	{
		c=i%10;
		sum=sum+c;
	}
	printf("The sum of digit is %d",sum);
}
int main()
{ int a;
	printf("Enter the number");
	scanf("%d",&a);
	sum_digit(a);
	return 0;
}