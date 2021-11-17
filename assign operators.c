#include<stdio.h>
void main()
{
	// assignment operators
	int x, y, z;
	x= 10;
	y= 4;
	z= 3;
	x += y; //14, 4, 3
	y -= z; //14, 1, 3
	z += x; //14, 1, 17
	y *= x; //14, 14, 17
	x *= z; //238, 14, 17
	printf("%d %d %d", x, y, z);
}
