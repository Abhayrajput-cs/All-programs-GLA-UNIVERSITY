#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int t,a,b,c,d,x;
  scanf("%d",&t);
  while(t!=0)
  {
    scanf("%d%d%d",&a,&b,&c);
    d=(a+b+c);
    if(d==180)
      printf("YES\n");
    else
      printf("NO\n");
t--;
  }
}
    
