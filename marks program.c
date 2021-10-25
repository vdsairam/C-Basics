#include<stdio.h>
void main()
{
	//variable declaration
	int phy, che, mat, eng, tot;
	
	//Initialization
	phy = 60;
	eng = 50;
	che = 70;
	mat = 80;
	//calculation
	tot = phy+eng+mat+che;
	
	//output
	printf("Marks in physics= %d\n" , phy);
	printf("Marks in chemistry= %d\n", che);
	Printf("Marks in English= %d\n", eng);
	printf("Marks in Maths= %d\n", mat);
	printf("Total marks= %d", tot);
}
