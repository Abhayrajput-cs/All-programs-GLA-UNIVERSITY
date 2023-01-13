#include<stdio.h>
int main()
{
	int a[100],b,f,temp,c=0;
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
		temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
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
	if(f>1)
	c++;
i=i+(f-1);
}
printf(" number of duplicates are %d\n",c);
	return 0;
}
