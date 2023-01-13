#include<stdio.h>
int main()
{
	printf("Enter a string ");
	char a[100],b[100],c[100];
	int l,p,d,i,st;
	scanf("%[^\n]s",a);
	scanf("%c",st);
	scanf("%[^\n]s",b);
	for(int i=0;a[i]!=0;i++)
	{
		l++;
	}
	for(int i=0;b[i]!=0;i++)
	{
		p++;
	}
	d=l+p;
	for( i=0;i<l;i++)
	{
		c[i]=a[i];
	}
	for(int j=i,k=0;j<d;j++,k++)
	{	
	c[j]=b[k];
	}
	printf("the string is %s",c);
	
	return 0;
}