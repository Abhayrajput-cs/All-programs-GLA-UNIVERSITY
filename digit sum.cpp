#include<stdio.h>
int main()
{
	int a,b,c=0;
	scanf("%d",&a);
	while(a!=0)
	{
	b=a%10;
	c=c+b;
	a=a/10;	
	}
	printf("the sum of digit is %d",c);
	return 0;
}