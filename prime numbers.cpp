#include<stdio.h>
int main()
{  
      int n; 
      scanf("%d",&n);
	  int c=0;
	  for(int i=1;i<=n;i++)
	  {
		if(n%i==0)
		c++;
	  } 
	  if(c==2)
	  printf(" The no is prime ");
	  else
	  printf(" The no is not prime ");
	  
    return 0;
	 }
    