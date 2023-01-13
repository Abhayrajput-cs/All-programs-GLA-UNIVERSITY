#include<stdio.h>
int main()                      
{ 
int b=-1;
	for(int i=5;i>=1;i--)
	{ 
	b=b+2;
		for(int j=1;j<=i-1;j++)
		{
			printf(" ");
		}
		for(int k=1;k<=b;k++)
		{
		
		printf("*");
	}
	printf("\n");
}
		return 0;
	}
