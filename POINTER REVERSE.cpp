#include<stdio.h>
int main()
{
	int a,b[100];
	int *p[100];
	int x,i,d=0,c=0;
	printf("Enter the size of array");
	scanf("%d",&a);
	printf("Enter the number to be searched ");
	scanf("%d",&x);
	printf("Enter the numbers");
	for(i=0;i<a;i++)
     {
     	scanf("%d",&b[i]);
     	p[i]=&b[i];
	 }
	 for(int i=0;i<a;i++)
	 {
       if(*p[i]==x)
       d++;
	   	 }
	if(d==1)
	printf("the number is searched");
	else
	printf("The number is not found");
	return 0;
}