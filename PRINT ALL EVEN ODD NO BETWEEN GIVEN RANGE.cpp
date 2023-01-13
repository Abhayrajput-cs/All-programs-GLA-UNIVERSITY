#include<stdio.h>
int oder(int a,int b)
{
	for(int i=a;i<=b;i++)
	{
	    if(i%2==0)
			printf("%d is even\n",i);
			else
			printf("%d is odd\n",i);	
	}
}
int main()
{
	int a,b;
	printf("Enter the Range of numbers");
	scanf("%d %d",&a,&b);
	oder(a,b);
}