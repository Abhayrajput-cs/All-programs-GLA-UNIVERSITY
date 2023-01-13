#include<stdio.h>
int main()
{
	printf("Enter the String\n");
	char a[100];
	int l;
	scanf("%[^\n]s",a);
	for(int i=0;a[i];i++)
{
	l++;
}
printf("The length of string is %d",l);
return 0;
}