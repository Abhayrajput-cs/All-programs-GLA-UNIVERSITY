#include<stdio.h>
int main()
{
	int a[100],b,del;
	printf("Enter the number of elements\n");
	scanf("%d",&b);
	for(int i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number");
	scanf("%d",&del);
     for(int i=0;i<b;i++)
     {
     	for(int j=0;j<b;j++)
     	{
     	if(a[i]==del)
     	a[i]=a[i+1];
	 }
}
	 for(int i=0;i<b;i++)
     {
     printf("%d\n",a[i]);
 }
 return 0;
}