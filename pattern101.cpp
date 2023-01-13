#include<stdio.h>
int main()
{ 
	for(int i=1;i<=5;i++)
	{ int a=4,b=i;
	for(int j=1;j<=i;j++)
	{ 
		printf("%d  ",b);
		b=b+a;
		a=a-1;
		}	
		printf("\n");
	}
	return 0;
}

