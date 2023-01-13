#include<stdio.h>
int sum(int a,int b)
{
	int sum=0,sum1=0;
	for(int i=a;i<=b;i++)
	{
	if(i%2==0)
	sum=sum+i;
	else
	sum1=sum1+i;
	}
	printf("sum of even numbers are =%d\n",sum);
	printf("sum of odd numbers are =%d",sum1);
}
int main()
{
	int a,b;
	printf("Enter the range");
	scanf("%d%d",&a,&b);
	sum(a,b);
	return 0;
}