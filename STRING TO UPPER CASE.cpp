#include<stdio.h>
int main()
{
	printf("Enter the string in lower case\n");
	char a[100],b[100];
	int p=0;
	scanf("%[^\n]s",a);
	for(int i=0;a[i]!=0;i++)
	{
		p++;
	}
	for(int j=0;j<p;j++)
	{
		if(a[j]!=' ')
	b[j]=a[j]-32;
	else
	continue;	
}
	printf("The upper case string is :-\n%s",b);
	return 0;
	}
