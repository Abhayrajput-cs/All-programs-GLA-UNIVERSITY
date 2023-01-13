#include<stdio.h>
int main()
{
	char ch[100];
	int p=0;
	printf("Enter the string ");
	scanf("%[^\n]s",ch);
	for(int i=0;ch[i];i++)
	{
		p++;
	}
	ch[0]=ch[0]-32;
	for(int i=0;i<p;i++)
	{	
	if(ch[i]==' ')
		{
			ch[i+1]=ch[i+1]-32;
		}
	}
	printf("Now the string is =%s",ch);
	return 0;
}