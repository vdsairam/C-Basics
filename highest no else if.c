#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two numbers");
	scanf("%d%d",&a ,&b);
	if(a>b)
	{
		printf("%d is the largest",a);
	}
	else if(a=b)
	{
		printf("Both are equal");
	}
	else
	{
		printf("%d is the largest", b);
	}
}
