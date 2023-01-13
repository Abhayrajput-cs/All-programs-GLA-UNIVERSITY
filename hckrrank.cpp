#include<stdio.h>
int main() 
{
int a;float z;
float c;
  scanf("%d",&a);
  for(float i=1.000000;i<=a;i++)
  { 
 int d=1;
    for(int j=1;j<i;j++)
    {
  d=d*j;
      }
      z=i/d;
    c=c+z;
  }
  printf("%f",c);
        return 0;
}
