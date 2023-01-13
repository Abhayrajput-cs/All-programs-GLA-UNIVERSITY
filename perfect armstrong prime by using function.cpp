#include<stdio.h>
#include<math.h>
void num(int a)
{ 
int c=0,y,sum=0,sum2=0;
for(int i=1;i<=a;i++)
	  {
		if(a%i==0)
		c++;
	  } 
	  if(c==2)
	   printf("The number is prime");
	   else
	   {
	   	 int n=a;
	  int b=log10(a)+1;
	 while(a>0)
	 {
	 	y=a%10;
	 	sum=sum+pow(y,b);
	 	a=a/10;
	 }
	 if(sum==n)
	 printf("The number is Armstrong");
	 else
	 for(int i=1;i<a;i++)
	{
		if(a%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==a)
	printf("The number is prft");
	else
	printf("The number is not prft\n");
	printf("the number is not armstrong \n");
	printf("The number is not prime");
}
}
int main()
{
printf("enter the number");
int z;
scanf("%d",&z);
num(z);
}
