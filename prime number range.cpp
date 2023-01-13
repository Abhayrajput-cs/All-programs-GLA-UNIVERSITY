#include<stdio.h>
int prime(int a,int b)
{ 
	for(int i=a;i<=b;i++)
	{ int c=1;
		for(int j=1;j<=a;j++)
		{
			if(i%j==0)
			c++;
		}
	if(c==2)
    printf("%d\n",i);  
	}
}
int main()
{
	int x,y;
	printf("enter the range of the numbers ");
	scanf("%d %d",&x,&y);
	prime(x,y);
	return 0;
}