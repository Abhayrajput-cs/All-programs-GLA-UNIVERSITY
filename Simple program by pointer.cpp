#include<stdio.h>
int main()
{
int*p,**q;
int a=5;
p=&a;
*q=p;
printf("%d %d",q,p);
return 0;
}

