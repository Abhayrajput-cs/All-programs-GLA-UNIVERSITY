#include<stdio.h>
int palindrome(int n)
{
int w=0;int c;
	for(int i=n;i>=1;i=i/10)
	{
		c=i%10;
		w=c+(w*10);
}
if(w==n)
	printf("the number %d is palindrome",w);
	else
	printf("The number is not palindrome");
}
int main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	palindrome(n);
	return 0;
}