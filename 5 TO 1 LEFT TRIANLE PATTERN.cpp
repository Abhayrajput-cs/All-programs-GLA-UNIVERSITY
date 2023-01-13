#include<stdio.h>
int main()                      
{ 
int a=0;
	for(int i=5;i>=1;i--)
	{  ++a;
		for(int j=1;j<=i-1;j++)
		{
			printf(" ");
		}
			for(int k=1;k<=a;k++)
			{
				printf("%d",i);
		}
		printf("\n");
		}
	
	return 0;                                                                                                                                                                                                                                                   
}