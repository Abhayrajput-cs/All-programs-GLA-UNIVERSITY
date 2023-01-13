#include<stdio.h>
int main()
{
	 int a,b,c=1,d=1;
	scanf("%d%d",&a,&b);	
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
			if((a%i)==0||(b%j)==0)
			{
				d=i*j;
				c=c*d;
			}
		}
	}
	printf("%d",c);
	return 0;
}