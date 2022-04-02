#include "function.h"
#include <stdio.h>
void Decision(int number, char xox_move, int* x,int* y,char tictactoeboard[3][3]) 
{
	if(number == 1)
	{
		*x=0;
		*y=0;
	}
	else if(number == 2)
	{
		*x=0;
		*y=1;
	}
	else if(number == 3)
	{
		*x=0;
		*y=2;
	}
	else if(number == 4)
	{
		*x=1;
		*y=0;
	}
	else if(number == 5)
	{
		*x=1;
		*y=1;
	}
	else if(number == 6)
	{
		*x=1;
		*y=2;
	}
	else if(number == 7)
	{
		*x=2;
		*y=0;
	}
	else if(number == 8)
	{
		*x=2;
		*y=1;
	}
	else if(number == 9)
	{
		*x=2;
		*y=2;
	}
	else
	{
		printf("Invalid number ...");
	}	
}