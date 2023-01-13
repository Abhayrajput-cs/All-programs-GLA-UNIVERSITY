#include<stdio.h>
int main() 
{
  int a,b,c,z,n=0,d;
  scanf("%d",&a);
  for(int i=0;i<a;i++)
  {
    scanf("%d %d",&b,&c);
    d=b+c;
    for(int j=1;j<9;j++)
    { 
	z=d+j;
      for(int k=1;k<z;k++)
      {
        if(z%k==0)
        n++;
    }
    if(n==2)
        printf("%d",j);
       }
       }
return 0;
}
