#include<stdio.h>
void main()
{
	int a, b, c, d;
	a= 9, b=10; // "a" hours "b" minutes
	c= 7, d=40; // "c" hours "d" minutes
	printf("%d minute(s)\n", a*60+b);
	printf("%d minutes(s)", c*60+d);
}
