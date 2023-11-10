#include<stdio.h>

main()
{
	int x = 6;
	int y = 8;
	int area = (x*x*x) + ((3*x*y)*(x+y)) + (y*y*y);
	
	printf("(x+y)3 = %d",area);
		
}