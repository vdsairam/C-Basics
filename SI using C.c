#include<stdio.h>
void main()
{
	int p=10000, t=2;
	float r=7.5, s_i;
	s_i=p*t*r/100;
	printf("Simple Interest for principal amount %d in %d years time at a rate of interest of %f is %f",p, t, r, s_i);
}
