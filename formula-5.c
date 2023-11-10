#include<stdio.h>

main()
{
	int x = 2;
	int y = 6;
	int z = 10;
	int area =  (x*x*x) + (y*y*y) + (z*z*z) + (3*(x+y)*(y+z)*(z+x));
	
	printf("(x+y+z)3 = %d",area);
		
}