#include<stdio.h>
void main()
{
	int n;
	printf("Enter number");
	scanf("%d", &n);
	if(n>0)
	{
		printf("%d is positive number", n);
	}
	else
	{
		printf("%d is negative number", n);
	}
}
