#include<stdio.h>
int main() 
{
int a,e,c,r=0,t=0,d=0,p;
  scanf("%d",&a);
  int b[a];
  for(int j=0;j<a;j++)
  {
    scanf("%d",&b[j]);
  }
  scanf("%d",&c);
  for(int i=0;i<a;i++)
  {
 if(b[i]!=c)
 {
 t++;
}
else
d++;
}
if(t==(a-1))
{
  for(int i=0;i<a;i++)
  {
    if(b[i]==c)
    {
      e=i;
      break;}
  }
  for(int k=1;k<=e;k++)
  {
  if(b[e-k]<c)
    printf("%d\n",b[e-k]);
      }
    for(int k=e;k<a;k++)
  {
  if(b[e+k]>c)
    printf("%d",b[e+k]);   
  }
}
else
{
  for(int i=0;i<a;i++)
  {
  	if(b[i]==c)
  	r++;
  	else
  	p=1;
  }
  if(p==1)
  printf("Noot found ");
}
  return 0;
}
