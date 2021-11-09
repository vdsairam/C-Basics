#include<stdio.h>
void main()
{
	int n, a, b, c;
	printf("Enter a number");
	scanf("%d", &n);
	printf("Given number: %d\n", n);
	printf("\nEnter three numbers");
	scanf("%d%d%d", &a, &b, &c);
	printf("Number1: %d\n", a);
	printf("Number2: %d\n", b);
	printf("Number3: %d\n", c);
	printf("Sum of three numbers: %d", a+b+c);
}
