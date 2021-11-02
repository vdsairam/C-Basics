//sum of Natural numbers
#include<stdio.h>
void main()
{
	int a, S, E, O;
	a=5;
	S= a*(a+1)/2;
	E= a*(a+1);
	O= a*a;
	printf("Sum of first %d natural numbers is = %d\n",a, S);
	printf("\nSum of first %d even natural numbers is = %d\n", a, E);
	printf("\nSum of first %d odd natural numbers is = %d", a, O);
}
