#include<stdio.h>
int cube(int n)
{
	int k=(n*n*n);
	printf("%d",k);
}
int main()
{
	printf("Enter the number for cube ");
	int a;
	scanf("%d",&a);
	cube(a);
	return 0;
}