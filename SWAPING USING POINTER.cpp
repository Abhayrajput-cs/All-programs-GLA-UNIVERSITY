#include<stdio.h>
int swap(int*p,int*q)
{   int c;
	c=*p;
	*p=*q;
	*q=c;
}
int main()
{     int a,b;
	printf("Enter te numbers");
	scanf("%d %d",&a,&b);
	printf("before swapping");
	printf("%d %d\n",a,b);
	printf("After swapping");
	swap(&a,&b);
	printf("%d %d",a,b);
	return 0;
}