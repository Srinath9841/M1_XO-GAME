#include "function.h"
#include <stdio.h>
void Display(char xox_move,int* x,int* y,char tictactoeboard[3][3]) 
{ 				
			tictactoeboard[*x][*y]=xox_move; 
	printf("_________________\n");	
	for(int i=0;i<3;i++)
		{	
			for(int j=0;j<3;j++)
			{
				printf("|  %c |",tictactoeboard[i][j]);
			}
			printf("\n");
			printf("|____||____||____|\n");
		}
}