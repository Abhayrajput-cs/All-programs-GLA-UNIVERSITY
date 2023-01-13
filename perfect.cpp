#include<stdio.h>
int main()
{
	int a,c,sum=0;
	printf("Enter the number\n");
	scanf("%d",&a);
	for(int i=1;i<a;i++)
	{
		if(a%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==a)
	printf("The number is perfect");
	else 
	printf("the number is not perfect");
	return 0;
}
	
