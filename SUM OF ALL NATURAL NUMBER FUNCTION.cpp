#include<stdio.h>
int sums(int a,int b)
{
int sum=0;
for(int i=a;i<=b;i++)
{
	sum=sum+i;
}
printf(" The sum is =%d",sum);
}
int main()
{
	int a,b;
	printf("Enter the range ");
	scanf("%d %d",&a,&b);
	sums(a,b);
	return 0;
}