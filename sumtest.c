#include<stdio.h>
void main(){
 int n,a,i,r,sum=0;
 printf("Enter the testcases\n");
 scanf("%d",&n);
 for(i=0;i<=n;i++){
 	scanf("%d",&a);
 	r=a%10;
 	sum=sum+r;
 	a/=10;
 	printf("%d",sum);
 }
}