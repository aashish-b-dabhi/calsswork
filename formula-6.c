#include<stdio.h>

main()
{
	int x = 15;
	int y = 9;
	int z = 7;
	int area =  (x*x*x) - (y*y*y) - (z*z*z) - (3*(x+y))+(3*(y+z))+(3*(z+x));
	
	printf("(x-y-z)3 = %d",area);
		
}