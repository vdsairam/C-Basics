#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter a number");
	scanf("%d%d",&a,&b);
	printf("Enter your choice:\n1.Arithmetic\n2.Relational\n3.Bitwise operator\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("Enter your choice\na. +\nb. -\nc. *\nd. /\ne. %%");
			scanf("%c",&d);
			switch(d)
			case 'a':
				printf("%d + %d is %d",a,b,a+b);
				break;
			case 'b':
				printf("%d - %d is %d",a,b,a-b);
				break;
			case 'c':
				printf("%d * %d is %d",a,b,a*b);
				break;
			case 'd':
				printf("%d / %d is %d",a,b,a/b);
				break;
			case 'e':
				printf("%d %% %d is %d",a,b,a%b);
				break;
		case 2:
			printf("2.Relational");
			break;
		
	}
	
}
