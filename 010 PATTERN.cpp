#include<stdio.h>
int main()
{ 
 int a;
	for(int i=1;i<=5;i++)
	{      
	for(int j=1;j<=i;j++)
	{
		a=i+j;
		if(i==j||a%2==0)
		printf("0");
		else
		printf("1");
	}
		printf("\n");
	}
	return 0;
	}
