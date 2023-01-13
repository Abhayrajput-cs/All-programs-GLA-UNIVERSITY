#include<stdio.h>
void circle(int r)
{
   float ar=(2*3.143*r*r);
   int dia=(2*r);
   float circum=(2*(3.143)*r);
   	printf("The area of circle is %f\n",ar);
	printf("The diameter of circle is %d\n",dia);
	printf("The circumference is %f",circum);
}
int main()
{
	printf("Enter the Radius of the circle ");
	int n;
	scanf("%d",&n);
	circle(n);
}