#include<stdio.h>
int main()
{
  int a[100][100],b[100][100],C=0;
  for(int i=0;i<3;i++)
  {
  	for(int j=0;j<3;j++)
  	{
  		scanf("%d",&a[i][j]);
	  }
  }	
  for(int i=0;i<3;i++)
  {
  	for(int j=0;j<3;j++)
  	{
  	   b[i][j]=a[j][i];
		 	  }
  }	
	    for(int i=0;i<3;i++)
  {
  	for(int j=0;j<3;j++)
  	{
  		if(a[i][j]==b[i][j])
  		C++;
		  }
  }	
if(C==9)
printf("The matrix is symmetric");
else
printf("The matrix is not symmetric");
return 0;
}