#include<stdio.h>
int main()
{
	int a[100];
	int b,e=0,o=0;
	printf("Enter the size of the array");
	scanf("%d",&b);
	for(int i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<b;i++)
{
	if(a[i]%2==0)
	e++;
else
o++;
}
printf("Thera are %d even number in the aaraay",e);
printf("there are %d odd numbers in the array",o);
return 0;
}