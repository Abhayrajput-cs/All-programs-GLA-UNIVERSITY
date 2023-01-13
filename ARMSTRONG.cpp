#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,b,c,s,sum=0;
	scanf("%d",&a);
	n=a;
	 b=log10(a)+1;
	 while(a>0)
	 {
	 	c=a%10;
	 	sum=sum+pow(c,b);
	 	a=a/10;
	 }
	 if(sum==n)
	 printf("THE NO IS ARMSTRONG");
	 else
	 printf("THE NUMBER IS NOT ARMSTRONG");
	 return 0;
}