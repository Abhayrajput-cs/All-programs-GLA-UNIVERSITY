#include<stdio.h>
int main()
{ int a,b,rev=0,n;
scanf("%d",&a);
n=a;
	while(a!=0)
	{
		b=a%10;
		rev=(rev*10)+b;
		a=a/10;
	}
	if(rev==n)
	printf("The no is palindrome");
	else
	printf("The number is not palindrome");
	return 0;
}