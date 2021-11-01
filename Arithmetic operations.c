#include<stdio.h>
void main()
{
	int a, b, c, d, e, f, g, h;
	a= 50;
	b= 5;
	c= a+b;
	d= a-b;
	e= a*b;
	f= a/b;
	g= a%b;
	h= c+d+e+f+g;
	printf("When a=50 and b=5\n");
	printf("\nSum of %d and %d is \"%d\"\n", a, b, c);
	printf("\nDifference betweem %d and %d is \"%d\"\n", a, b, d);
	printf("\nProduct of %d and %d is \"%d\"\n", a, b, e);
	printf("\nQuotient when %d is divided by %d is \"%d\"\n", a, b, f);
	printf("\nRemainder when %d is divided by %d is \"%d\"\n", a, b, g);
	printf("\nSum of all arithmetic operations is \"%d\"",h);
}
