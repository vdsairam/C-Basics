#include<stdio.h>
int main()
{
	int m,n,i,j;
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
