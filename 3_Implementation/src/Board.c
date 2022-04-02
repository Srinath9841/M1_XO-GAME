#include "function.h"
#include <stdio.h>
void Board()
{
	int board[3][3]={{7,8,9},{4,5,6},{1,2,3}};
	for(int i=0;i<3;i++)
		{	
			for(int j=0;j<3;j++)
			{
				printf("    %d",board[i][j]);
			}
			printf("\n");
			printf("\n");
		}
}