#include<stdio.h>
void add(int*p,int*q)
{
	int c=*p+*q;
	printf("%d",c);
}	
int main()
{     int a,b,c;
	printf("Enter te numbers");
	scanf("%d %d",&a,&b);
	printf("After Adding\n");
	printf("The sum is =");
	add(&a,&b);
	return 0;
	
}