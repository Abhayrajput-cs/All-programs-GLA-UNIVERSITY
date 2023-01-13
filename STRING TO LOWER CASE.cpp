#include<stdio.h>
int main()
{
	printf("Enter the string in Upper case");
	char a[100],b[100];
	int p=0;
	scanf("%[^\n]s",a);
	for(int i=0;a[i];i++)
	{
		p++;
	}
	for(int j=0;j<p;j++)
	{
		b[j]=a[j]+32;
	
	}
	printf("The upper case string is :-\n%s",b);
	return 0;
	}