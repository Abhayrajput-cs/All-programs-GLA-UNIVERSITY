#include<stdio.h>
int main()
{
	int a[100],b;
printf("Enter the size of the array");
scanf("%d",&b);
for(int i=0;i<b;i++)
{
	scanf("%d",&a[i]);
}
for(int j=b-1;j>=0;j--)
{
	printf(" %d ",a[j]);
}
return 0;
}
