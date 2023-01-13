#include<stdio.h>
int main()
{
	int a[100],b,f,z;
	printf("Enter the number of elements\n");
	scanf("%d",&b);
	for(int i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
		for(int j=0;j<b;j++)
	{
	for(int i=0;i<b;i++)
{
	if(a[i]>a[i+1])
	{
		z=a[i];
	a[i]=a[i+1];
	a[i+1]=z;
	}
}
}
for(int i=0;i<b;i++)
{  f=1;
for(int j=i+1;j<b;j++)
{
	if(a[i]==a[j])
	f++;
}
i=i+(f-1);
printf(" frequency of %d is %d\n",a[i],f);
}
	return 0;
}
