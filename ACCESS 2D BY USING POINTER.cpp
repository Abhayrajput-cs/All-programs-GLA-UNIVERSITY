#include<stdio.h>
int main()
{
	int *p[100][100];
	int a;
	int b[100][100];
	scanf("%d",&a);
	printf("Enter the numbers ");
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<a;j++)
		{
		scanf("%d",&b[i][j]);
		p[i][j]=&b[i][j];
	}
}
for(int i=0;i<a;i++)
	{
		for(int j=0;j<a;j++)
		{   
		printf("%d ",*p[i][j]);
	}
	printf("\n");
}	
return 0;
}