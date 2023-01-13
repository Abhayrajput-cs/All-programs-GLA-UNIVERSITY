#include<stdio.h>
#include<math.h>
int main()
{
	printf("Enter the string");
	char a[100],b[100];
	scanf("%[^\n]s",a);
	for(int i=0;a[i];i++)
	{
		b[i]=a[i];
	}
	printf("the string is %s",b);
	return 0;
}