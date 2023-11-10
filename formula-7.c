#include<stdio.h>

main()
{
	int x = 18;
	int y = 10;
	int z = 1;
	int area =  (x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x));
	
	printf("(x+y+z)2 = %d",area);
		
}