#include<stdio.h>
void main()
{
	int m;
	printf("Enter marks:");
	scanf("%d",&m);
	if(m>=80)
	{
		printf("A");
	}
	else if(m>=70)
	{
		printf("B");
	}
	else if(m>=60)
	{
		printf("C");
	}
	else if(m>=50)
	{
		printf("D");
	}
	else
	{
		printf("FAIL");
	}
}
