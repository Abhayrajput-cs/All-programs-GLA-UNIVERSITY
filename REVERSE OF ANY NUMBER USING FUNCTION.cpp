#include<stdio.h>
int rev(int a)
{
 int w=0;int c;
	for(int i=a;i>=1;i=i/10)
	{
		c=i%10;
		w=c+(w*10);
	}
	printf("the reverse of the number is %d",w);
}
int main()
{
	int a;
	printf("Enter the number ");
	scanf("%d",&a);
	rev(a);
	return 0;
	
}