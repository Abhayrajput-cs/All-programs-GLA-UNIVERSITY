#include<stdio.h>
void swap(int *p,int *q)
	{
		int c;
		c=*q;
		*p=*q;
		*q=c;
	}
int main()
{
	int a,b;
	scanf("%d  %d",&a,&b);
	printf("before calling the function ,the  value of a and b is %d ,%d\n",a,b);
	swap(&a,&b);
	printf("after calling the function the value of  a and b is %d ,%d",a,b);
}