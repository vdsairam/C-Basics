#include<stdio.h>
void main()
{
	int E,M,P,C,CS,total;
	float perc;
	printf("Enter marks of each subject:");
	scanf("%d%d%d%d%d",&E,&M,&P,&C,&CS);
	total = E+M+P+C+CS;
	perc = total*1.0/5;
	if(E>=35 && M>=35 && P>=35 && C>=35 && CS>=35)
	{
		printf("Result: PASS\n");
		printf("Total marks out of 500 is %d\n",total);
		printf("Percentage:%f\n",perc);
		printf("Grade: ");
	if(perc >=90)
	{
		printf("O");
	}
	else if(perc >=80)
	{
		printf("A");
	}
	else if(perc >=70)
	{
		printf("B");
	}
	else if(perc >=60)
	{
		printf("C");
	}
	else if(perc >=50)
	{
		printf("D");
	}
	else
	{
		printf("E");
	}
	}
	else 
	{
		printf("FAIL");
	}
}
