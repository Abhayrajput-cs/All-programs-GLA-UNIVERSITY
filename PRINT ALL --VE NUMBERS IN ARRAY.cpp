#include<stdio.h>
int main()
{
	int a[100];
	int b,c;
	printf("Enter the size of the array");
	scanf("%d",&b);
	for(int i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<b;i++)
	{
		if(a[i]<0)
			printf("%d\n",a[i]);
}
	return 0;
}