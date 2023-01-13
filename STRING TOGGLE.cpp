#include<stdio.h>
int main()
{
	printf("Enter the string in any case\n");
	char a[100],b[100];
	int p=0;
	scanf("%[^\n]s",a);
	for(int i=0;a[i];i++)
	{
		p++;
	}
	for(int j=0;j<p;j++)
	{ 
	for(char i='A';i<='Z';i++)
	{
		if(a[j]==i)
		b[j]=a[j]+32;
		else
	for(int k=j+1;k<p;k++)
	{
		for(char l='a';l<='z';l++)
		{
			if(a[k]==l)
           b[k]=a[k]-32;			
          }
	}
}
}
	printf("The string is :-\n%s",b);
	return 0;
}
