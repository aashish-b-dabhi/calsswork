#include<stdio.h>

main()
{
	int x = 2;
	int y = 6;
	int area = (x*x*x) - (y*y*y) - ((3*x*y)*(x+y));
	
	printf("(x-y)3 = %d",area);
		
}