#include<stdio.h>
int abc(int y,int z)
{
	int a=1;
 for(int i=0;i<z;i++)
 {
 	a=a*y;
 }
 printf("%d",a);
}
int main()
{
	int p,r;
	printf("Enter the number to be power");
	scanf("%d",&p);
	printf("Enter the power");
	scanf("%d",&r);
	abc( p, r);
	return 0;
}
