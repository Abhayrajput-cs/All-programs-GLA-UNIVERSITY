#include<stdio.h>
int main()
{
	//fibonacci  gyaan_dhyan
	int a,c,b=1,d=0;
	c=b+d;
	scanf("%d",&a);
	printf("%d",d);
	printf("%d",b);
	for(int i=3;i<=a-1;i++)
	{
	printf("%d ",c);
	i=b;
	b=c;
	c=i+b;
}
return 0;
	}
